#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct GlobalIlluminationSettings : IAreaSettings
{
    static constexpr const char* NAME = "GlobalIlluminationSettings";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> multiBouceScale; // 48
    CurveData<float> multiBouceSaturation; // 80
    CurveData<float> emissiveScale; // B8
    CurveData<float> diffuseScale; // F0
    CurveData<float> localLightsScale; // 128
    CurveData<float> lightScaleCompenensation; // 160
    CurveData<float> reflectionCompensation; // 198
    CurveData<HDRColor> ambientBase; // 1D0
    CurveData<float> rayTracedSkyRadianceScale; // 208
};
RED4EXT_ASSERT_SIZE(GlobalIlluminationSettings, 0x240);
} // namespace RED4ext

// clang-format on
