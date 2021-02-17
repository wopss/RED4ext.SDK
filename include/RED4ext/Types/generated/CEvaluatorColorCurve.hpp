#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/IEvaluatorColor.hpp>
#include <RED4ext/Types/generated/Vector4.hpp>

namespace RED4ext
{
struct CEvaluatorColorCurve : IEvaluatorColor
{
    static constexpr const char* NAME = "CEvaluatorColorCurve";
    static constexpr const char* ALIAS = NAME;

    CurveData<Vector4> curves; // 30
    uint32_t numberOfCurveSamples; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(CEvaluatorColorCurve, 0x70);
} // namespace RED4ext
