#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct CBitmapTexture;

struct RainAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "RainAreaSettings";
    static constexpr const char* ALIAS = NAME;

    uint32_t numParticles; // 48
    float radius; // 4C
    float heightRange; // 50
    float globalLightResponse; // 54
    CurveData<float> tiling; // 58
    CurveData<float> speed; // 90
    float roughnessShift; // C8
    float roughnessClip; // CC
    float roughnessExponent; // D0
    float baseColorShift; // D4
    float baseColorClip; // D8
    float baseColorExponent; // DC
    float porosityThreshold; // E0
    float moistureAccumulationSpeed; // E4
    float puddlesAccumulationSpeed; // E8
    float moistureEvaporationSpeed; // EC
    float puddlesEvaporationSpeed; // F0
    uint8_t unkF4[0xF8 - 0xF4]; // F4
    CurveData<float> rainIntensity; // F8
    CurveData<float> rainOverride; // 130
    CurveData<float> rainMoistureOverride; // 168
    CurveData<float> rainPuddlesOverride; // 1A0
    Ref<CBitmapTexture> rainleaksMask; // 1D8
    Ref<CBitmapTexture> raindropsMask; // 1F0
    Ref<CBitmapTexture> rainRipplesMask; // 208
};
RED4EXT_ASSERT_SIZE(RainAreaSettings, 0x220);
} // namespace RED4ext
