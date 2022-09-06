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
struct VolumetricFogAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "VolumetricFogAreaSettings";
    static constexpr const char* ALIAS = NAME;

    CurveData<float> range; // 48
    CurveData<float> localLightRange; // 80
    CurveData<float> fogHeight; // B8
    CurveData<float> fogHeightFalloff; // F0
    CurveData<float> fogHeightMaxCut; // 128
    CurveData<float> density; // 160
    CurveData<float> absorption; // 198
    CurveData<float> globalLightAnisotropy; // 1D0
    CurveData<float> globalLightAnisotropyBase; // 208
    CurveData<float> globalLightAnisotropyScale; // 240
    CurveData<HDRColor> albedo; // 278
    CurveData<HDRColor> distantAlbedo; // 2B0
    CurveData<float> ambientScale; // 2E8
    CurveData<float> localAmbientScale; // 320
    CurveData<float> globalLightScale; // 358
    CurveData<float> distantGlobalLightScale; // 390
    CurveData<float> localLightScale; // 3C8
    uint8_t unk400[0x480 - 0x400]; // 400
    CurveData<float> distantGroundIrradiance; // 480
    CurveData<float> distantGroundSaturation; // 4B8
    CurveData<float> distantSkyIrradiance; // 4F0
    CurveData<float> distantShadowAmbientDarkening; // 528
};
RED4EXT_ASSERT_SIZE(VolumetricFogAreaSettings, 0x560);
} // namespace RED4ext

// clang-format on
