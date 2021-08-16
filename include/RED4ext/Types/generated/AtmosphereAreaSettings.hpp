#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/HDRColor.hpp>
#include <RED4ext/Types/generated/IAreaSettings.hpp>

namespace RED4ext
{
struct CBitmapTexture;
struct CCubeTexture;

struct AtmosphereAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "AtmosphereAreaSettings";
    static constexpr const char* ALIAS = NAME;

    CurveData<HDRColor> skydomeColor; // 48
    CurveData<HDRColor> skylightColor; // 80
    CurveData<HDRColor> groundReflectance; // B8
    CurveData<float> horizonMinZ; // F0
    CurveData<float> sunMinZ; // 128
    CurveData<float> horizonFalloff; // 160
    CurveData<float> turbidity; // 198
    CurveData<float> lutTurbidity; // 1D0
    CurveData<HDRColor> artisticDarkeningColor; // 208
    CurveData<float> artisticDarkeningStartPoint; // 240
    CurveData<float> artisticDarkeningEndPoint; // 278
    CurveData<float> artisticDarkeningExponent; // 2B0
    CurveData<HDRColor> sunColor; // 2E8
    CurveData<float> sunFalloff; // 320
    CurveData<float> rayTracedSunShadowRange; // 358
    CurveData<HDRColor> moonColor; // 390
    CurveData<float> moonFalloff; // 3C8
    CurveData<float> moonGlowIntensity; // 400
    CurveData<float> moonGlowFalloff; // 438
    Ref<CBitmapTexture> moonTexture; // 470
    CurveData<float> galaxyIntensity; // 488
    CurveData<float> starMapIntensity; // 4C0
    CurveData<float> starMapBrightScale; // 4F8
    CurveData<float> starMapDimScale; // 530
    CurveData<float> starMapConstelationsScale; // 568
    CurveData<float> starCornerLuminanceFix; // 5A0
    Ref<CCubeTexture> starMapTexture; // 5D8
    Ref<CBitmapTexture> galaxyTexture; // 5F0
    CurveData<HDRColor> probeColorOverrideHorizon; // 608
    CurveData<float> probeAlphaOverrideHorizon; // 640
    CurveData<HDRColor> probeColorOverrideZenith; // 678
    CurveData<float> probeAlphaOverrideZenith; // 6B0
    CurveData<float> cloudSunShadowFaloff; // 6E8
    CurveData<float> cloudSunScattering; // 720
    CurveData<float> cloudMoonScattering; // 758
    CurveData<float> cloudCirrusOpacity; // 790
    CurveData<float> cloudAmbientIntensity; // 7C8
    CurveData<float> cloudCirrusScale; // 800
    CurveData<float> cloudCirrusAltitude; // 838
    Ref<CBitmapTexture> cloudCirrusTexture; // 870
    Ref<CBitmapTexture> volWeatherTexture; // 888
    Ref<CBitmapTexture> volNoiseTexture; // 8A0
    CurveData<float> volCoverage; // 8B8
    float volHorizonCoverage; // 8F0
    uint8_t unk8F4[0x8F8 - 0x8F4]; // 8F4
    CurveData<float> volDensity; // 8F8
    float cloudsBottom; // 930
    float cloudsTop; // 934
    float rayStartOffset; // 938
    float rayStartFalloff; // 93C
    CurveData<float> lightIntensity; // 940
    CurveData<float> reflectionProbeLightIntensity; // 978
    CurveData<float> shadowIntensity; // 9B0
    CurveData<float> worldShadowIntensity; // 9E8
    CurveData<float> ambientIntensity; // A20
    float inScatter; // A58
    float outScatter; // A5C
    float inVsOutScatter; // A60
    float silverLining; // A64
    uint8_t unkA68[0xA70 - 0xA68]; // A68
    CurveData<float> ambientOutscatter; // A70
    float volCoverageWindInfluence; // AA8
    float volNoiseWindInfluence; // AAC
    float volDetailWindInfluence; // AB0
    float volDistantFogOpacity; // AB4
};
RED4EXT_ASSERT_SIZE(AtmosphereAreaSettings, 0xAB8);
} // namespace RED4ext
