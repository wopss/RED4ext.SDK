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
};
RED4EXT_ASSERT_SIZE(AtmosphereAreaSettings, 0x6E8);
} // namespace RED4ext

// clang-format on
