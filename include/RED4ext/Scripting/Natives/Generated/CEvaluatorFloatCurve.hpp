#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IEvaluatorFloat.hpp>

namespace RED4ext
{
struct CEvaluatorFloatCurve : IEvaluatorFloat
{
    static constexpr const char* NAME = "CEvaluatorFloatCurve";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> curves; // 30
    uint32_t numberOfCurveSamples; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(CEvaluatorFloatCurve, 0x70);
} // namespace RED4ext

// clang-format on
