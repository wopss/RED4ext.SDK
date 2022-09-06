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
struct DistantFogAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "DistantFogAreaSettings";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> range; // 48
    CurveData<HDRColor> albedoNear; // 80
    CurveData<HDRColor> albedoFar; // B8
    CurveData<float> nearDistance; // F0
    CurveData<float> farDistance; // 128
    CurveData<float> density; // 160
    CurveData<float> height; // 198
    CurveData<float> heightFallof; // 1D0
    CurveData<float> densitySecond; // 208
    CurveData<float> heightSecond; // 240
    CurveData<float> heightFallofSecond; // 278
    CurveData<HDRColor> simpleColor; // 2B0
    CurveData<float> simpleDensity; // 2E8
    CurveData<HDRColor> envProbeColor; // 320
    CurveData<float> envProbeDensity; // 358
    CurveData<float> skyAltitudeBegin; // 390
    CurveData<float> skyAltitudeEnd; // 3C8
    CurveData<float> skyOpacity; // 400
};
RED4EXT_ASSERT_SIZE(DistantFogAreaSettings, 0x438);
} // namespace RED4ext

// clang-format on
