#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IEvaluatorVector.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct CEvaluatorVectorCurve : IEvaluatorVector
{
    static constexpr const char* NAME = "CEvaluatorVectorCurve";
    static constexpr const char* ALIAS = NAME;

    CurveData<Vector4> curves; // 38
    uint32_t numberOfCurveSamples; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(CEvaluatorVectorCurve, 0x78);
} // namespace RED4ext

// clang-format on
