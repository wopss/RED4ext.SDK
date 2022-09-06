#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct RenderSettingFactors
{
    static constexpr const char* NAME = "RenderSettingFactors";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> resolutionAberrationScale; // 00
    CurveData<float> resolutionAberrationDispersal; // 38
    CurveData<float> resolutionFilmGrainScale; // 70
    CurveData<float> resolutionFilmGrainStrength; // A8
};
RED4EXT_ASSERT_SIZE(RenderSettingFactors, 0xE0);
} // namespace RED4ext

// clang-format on
