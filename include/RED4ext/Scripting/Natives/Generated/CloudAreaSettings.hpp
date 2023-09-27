#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext
{
struct CBitmapTexture;

struct CloudAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "CloudAreaSettings";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> cloudSunShadowFaloff; // 48
    CurveData<float> cloudSunScattering; // 80
    CurveData<float> cloudMoonScattering; // B8
    CurveData<float> cloudCirrusOpacity; // F0
    CurveData<HDRColor> cloudLightColor; // 128
    CurveData<float> cloudAmbientIntensity; // 160
    CurveData<float> cloudCirrusScale; // 198
    CurveData<float> cloudCirrusAltitude; // 1D0
    Ref<CBitmapTexture> cloudCirrusTexture; // 208
    Ref<CBitmapTexture> volWeatherTexture; // 220
    Ref<CBitmapTexture> volNoiseTexture; // 238
    CurveData<float> volCoverage; // 250
    float volHorizonCoverage; // 288
    uint8_t unk28C[0x290 - 0x28C]; // 28C
    CurveData<float> volDensity; // 290
    float cloudsBottom; // 2C8
    float cloudsTop; // 2CC
    float rayStartOffset; // 2D0
    float rayStartFalloff; // 2D4
    CurveData<float> lightIntensity; // 2D8
    CurveData<float> reflectionProbeLightIntensity; // 310
    CurveData<float> shadowIntensity; // 348
    CurveData<float> worldShadowIntensity; // 380
    CurveData<float> ambientIntensity; // 3B8
    float inScatter; // 3F0
    float outScatter; // 3F4
    float inVsOutScatter; // 3F8
    float silverLining; // 3FC
    uint8_t unk400[0x408 - 0x400]; // 400
    CurveData<float> ambientOutscatter; // 408
    float volCoverageWindInfluence; // 440
    float volNoiseWindInfluence; // 444
    float volDetailWindInfluence; // 448
    float volDistantFogOpacity; // 44C
    Vector2 volCoverageOffset; // 450
};
RED4EXT_ASSERT_SIZE(CloudAreaSettings, 0x458);
} // namespace RED4ext

// clang-format on
