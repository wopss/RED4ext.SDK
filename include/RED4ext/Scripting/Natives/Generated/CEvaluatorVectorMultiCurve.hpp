#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IEvaluatorVector.hpp>

namespace RED4ext
{
struct CEvaluatorVectorMultiCurve : IEvaluatorVector
{
    static constexpr const char* NAME = "CEvaluatorVectorMultiCurve";
    static constexpr const char* ALIAS = NAME;

    ChannelCurve:Float curves; // 38
    uint32_t numberOfCurveSamples; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(CEvaluatorVectorMultiCurve, 0x78);
} // namespace RED4ext

// clang-format on
