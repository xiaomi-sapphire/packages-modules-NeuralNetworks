// Generated from less_equal_quant8_signed.mod.py
// DO NOT EDIT
// clang-format off
#include "TestHarness.h"
using namespace test_helper;

namespace generated_tests::less_equal_quant8_signed {

const TestModel& get_test_model_quantized_different_scale() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_3,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({1, 2, 3}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<bool8>({true, true, false}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_BOOL8,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::LESS_EQUAL
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_quantized_different_scale = TestModelManager::get().add("less_equal_quant8_signed_quantized_different_scale", get_test_model_quantized_different_scale());

}  // namespace generated_tests::less_equal_quant8_signed

namespace generated_tests::less_equal_quant8_signed {

const TestModel& get_test_model_quantized_different_scale_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {3, 6},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_3,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<bool8>({true, true, false}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_BOOL8,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({1, 2, 3}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 2.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {3, 4, 5},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {6, 7, 8},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::LESS_EQUAL
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_quantized_different_scale_all_inputs_as_internal = TestModelManager::get().add("less_equal_quant8_signed_quantized_different_scale_all_inputs_as_internal", get_test_model_quantized_different_scale_all_inputs_as_internal());

}  // namespace generated_tests::less_equal_quant8_signed

namespace generated_tests::less_equal_quant8_signed {

const TestModel& get_test_model_quantized_different_zero_point() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_3,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({1, 2, 3}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({3}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<bool8>({true, true, false}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_BOOL8,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::LESS_EQUAL
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_quantized_different_zero_point = TestModelManager::get().add("less_equal_quant8_signed_quantized_different_zero_point", get_test_model_quantized_different_zero_point());

}  // namespace generated_tests::less_equal_quant8_signed

namespace generated_tests::less_equal_quant8_signed {

const TestModel& get_test_model_quantized_different_zero_point_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {3, 6},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_3,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<bool8>({true, true, false}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_BOOL8,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({1, 2, 3}),
                .dimensions = {3},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({0}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({3}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({1}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.0f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 1
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {3, 4, 5},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {6, 7, 8},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::LESS_EQUAL
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_quantized_different_zero_point_all_inputs_as_internal = TestModelManager::get().add("less_equal_quant8_signed_quantized_different_zero_point_all_inputs_as_internal", get_test_model_quantized_different_zero_point_all_inputs_as_internal());

}  // namespace generated_tests::less_equal_quant8_signed

namespace generated_tests::less_equal_quant8_signed {

const TestModel& get_test_model_quantized_overflow_second_input_if_requantized() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_3,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-128}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.64771f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -97
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({72}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.49725f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 112
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<bool8>({false}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_BOOL8,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::LESS_EQUAL
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_quantized_overflow_second_input_if_requantized = TestModelManager::get().add("less_equal_quant8_signed_quantized_overflow_second_input_if_requantized", get_test_model_quantized_overflow_second_input_if_requantized());

}  // namespace generated_tests::less_equal_quant8_signed

namespace generated_tests::less_equal_quant8_signed {

const TestModel& get_test_model_quantized_overflow_second_input_if_requantized_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {3, 6},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_3,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.64771f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -97
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.49725f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 112
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<bool8>({false}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_BOOL8,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-128}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.64771f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -97
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-97}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.64771f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -97
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({72}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.49725f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 112
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({112}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.49725f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 112
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {3, 4, 5},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {6, 7, 8},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::LESS_EQUAL
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_quantized_overflow_second_input_if_requantized_all_inputs_as_internal = TestModelManager::get().add("less_equal_quant8_signed_quantized_overflow_second_input_if_requantized_all_inputs_as_internal", get_test_model_quantized_overflow_second_input_if_requantized_all_inputs_as_internal());

}  // namespace generated_tests::less_equal_quant8_signed

namespace generated_tests::less_equal_quant8_signed {

const TestModel& get_test_model_quantized_overflow_first_input_if_requantized() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {0, 1},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_3,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({72}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.49725f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 112
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-128}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.64771f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -97
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<bool8>({true}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_BOOL8,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::LESS_EQUAL
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_quantized_overflow_first_input_if_requantized = TestModelManager::get().add("less_equal_quant8_signed_quantized_overflow_first_input_if_requantized", get_test_model_quantized_overflow_first_input_if_requantized());

}  // namespace generated_tests::less_equal_quant8_signed

namespace generated_tests::less_equal_quant8_signed {

const TestModel& get_test_model_quantized_overflow_first_input_if_requantized_all_inputs_as_internal() {
    static TestModel model = {
        .expectFailure = false,
        .expectedMultinomialDistributionTolerance = 0,
        .inputIndexes = {3, 6},
        .isRelaxed = false,
        .minSupportedVersion = TestHalVersion::V1_3,
        .operands = {{
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.49725f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 112
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::TEMPORARY_VARIABLE,
                .numberOfConsumers = 1,
                .scale = 1.64771f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -97
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<bool8>({true}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_OUTPUT,
                .numberOfConsumers = 0,
                .scale = 0.0f,
                .type = TestOperandType::TENSOR_BOOL8,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({72}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.49725f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 112
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({112}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.49725f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = 112
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-128}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::MODEL_INPUT,
                .numberOfConsumers = 1,
                .scale = 1.64771f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -97
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int8_t>({-97}),
                .dimensions = {1},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 1.64771f,
                .type = TestOperandType::TENSOR_QUANT8_ASYMM_SIGNED,
                .zeroPoint = -97
            }, {
                .channelQuant = {},
                .data = TestBuffer::createFromVector<int32_t>({0}),
                .dimensions = {},
                .isIgnored = false,
                .lifetime = TestOperandLifeTime::CONSTANT_COPY,
                .numberOfConsumers = 1,
                .scale = 0.0f,
                .type = TestOperandType::INT32,
                .zeroPoint = 0
            }},
        .operations = {{
                .inputs = {3, 4, 5},
                .outputs = {0},
                .type = TestOperationType::ADD
            }, {
                .inputs = {6, 7, 8},
                .outputs = {1},
                .type = TestOperationType::ADD
            }, {
                .inputs = {0, 1},
                .outputs = {2},
                .type = TestOperationType::LESS_EQUAL
            }},
        .outputIndexes = {2}
    };
    return model;
}

const auto dummy_test_model_quantized_overflow_first_input_if_requantized_all_inputs_as_internal = TestModelManager::get().add("less_equal_quant8_signed_quantized_overflow_first_input_if_requantized_all_inputs_as_internal", get_test_model_quantized_overflow_first_input_if_requantized_all_inputs_as_internal());

}  // namespace generated_tests::less_equal_quant8_signed
