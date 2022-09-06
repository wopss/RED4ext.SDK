#pragma once

// clang-format off

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
    float porosityThresholdStart; // 90
    float porosityThresholdEnd; // 94
    float glossinessFactor; // 98
    float baseColorFactor; // 9C
    float moistureAccumulationSpeed; // A0
    float puddlesAccumulationSpeed; // A4
    float moistureEvaporationSpeed; // A8
    float puddlesEvaporationSpeed; // AC
    CurveData<float> rainIntensity; // B0
    CurveData<float> rainOverride; // E8
    CurveData<float> rainMoistureOverride; // 120
    CurveData<float> rainPuddlesOverride; // 158
    float waterRainIntensity; // 190
    uint8_t unk194[0x198 - 0x194]; // 194
    Ref<CBitmapTexture> rainleaksMask; // 198
    Ref<CBitmapTexture> raindropsMask; // 1B0
    Ref<CBitmapTexture> rainRipplesMask; // 1C8
};
RED4EXT_ASSERT_SIZE(RainAreaSettings, 0x1E0);
} // namespace RED4ext

// clang-format on
