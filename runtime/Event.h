/*
 * Copyright (C) 2020 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_PACKAGES_MODULES_NEURALNETWORKS_RUNTIME_EVENT_H
#define ANDROID_PACKAGES_MODULES_NEURALNETWORKS_RUNTIME_EVENT_H

#include <android-base/logging.h>
#include <nnapi/Types.h>

#include <functional>
#include <memory>
#include <mutex>
#include <utility>

#include "ExecutionCallback.h"

namespace android::nn {

class IEvent {
   public:
    virtual ~IEvent() = default;
    virtual ErrorStatus wait() const = 0;
    virtual int getSyncFenceFd(bool shouldDup) const = 0;
};

// The CallbackEvent wraps ExecutionCallback
class CallbackEvent : public IEvent {
   public:
    CallbackEvent(std::shared_ptr<ExecutionCallback> callback)
        : kExecutionCallback(std::move(callback)) {
        CHECK(kExecutionCallback != nullptr);
    }

    ErrorStatus wait() const override {
        kExecutionCallback->wait();
        return kExecutionCallback->getStatus();
    }

    // Always return -1 as this is not backed by a sync fence.
    int getSyncFenceFd(bool /*should_dup*/) const override { return -1; }

   private:
    const std::shared_ptr<ExecutionCallback> kExecutionCallback;
};

// The SyncFenceEvent wraps sync fence and ExecuteFencedInfoCallback
class SyncFenceEvent : public IEvent {
    using ExecutionFinishCallback = std::function<ErrorStatus(ErrorStatus)>;

   public:
    SyncFenceEvent(int sync_fence_fd, const ExecuteFencedInfoCallback& callback,
                   const ExecutionFinishCallback& finish)
        : kFencedExecutionCallback(callback), kFinishCallback(finish) {
        if (sync_fence_fd > 0) {
            // Dup the provided file descriptor
            mSyncFenceFd = dup(sync_fence_fd);
            CHECK(mSyncFenceFd > 0);
        }
    }

    // Close the fd the event owns.
    ~SyncFenceEvent() { close(mSyncFenceFd); }

    // Use syncWait to wait for the sync fence until the status change.
    // In case of syncWait error, query the dispatch callback for detailed error status.
    // This method maps to the NDK ANeuralNetworksEvent_wait, which must be thread-safe.
    ErrorStatus wait() const override {
        std::lock_guard<std::mutex> lock(mMutex);
        if (mFinished) return mError;

        if (mSyncFenceFd > 0 && syncWait(mSyncFenceFd, -1) != FenceState::SIGNALED) {
            mError = ErrorStatus::GENERAL_FAILURE;
            // If there is a callback available, use the callback to get the error code.
            if (kFencedExecutionCallback != nullptr) {
                auto result = kFencedExecutionCallback();
                if (!result.has_value()) {
                    LOG(ERROR) << "Fenced execution callback failed: " << result.error().message;
                    mError = result.error().code;
                    CHECK_NE(mError, ErrorStatus::NONE);
                }
            }
        }
        if (kFinishCallback != nullptr) {
            mError = kFinishCallback(mError);
        }
        mFinished = true;
        return mError;
    }

    // Return the sync fence fd.
    // If shouldDup is true, the caller must close the fd returned:
    //  - When being used internally within NNAPI runtime, set shouldDup to false.
    //  - When being used to return a fd to application code, set shouldDup to
    //  true.
    int getSyncFenceFd(bool shouldDup) const override {
        if (shouldDup) {
            return dup(mSyncFenceFd);
        }
        return mSyncFenceFd;
    }

   private:
    // TODO(b/148423931): used android::base::unique_fd instead.
    int mSyncFenceFd = -1;
    const ExecuteFencedInfoCallback kFencedExecutionCallback;
    const ExecutionFinishCallback kFinishCallback;

    mutable std::mutex mMutex;
    mutable bool mFinished GUARDED_BY(mMutex) = false;
    mutable ErrorStatus mError GUARDED_BY(mMutex) = ErrorStatus::NONE;
};

}  // namespace android::nn

#endif  // ANDROID_PACKAGES_MODULES_NEURALNETWORKS_RUNTIME_EVENT_H
