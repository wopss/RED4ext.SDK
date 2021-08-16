#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/IEvaluatorVector.hpp>

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
