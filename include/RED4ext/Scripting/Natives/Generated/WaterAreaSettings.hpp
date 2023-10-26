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

struct __declspec(align(0x10)) WaterAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "WaterAreaSettings";
    static constexpr const char* ALIAS = NAME;

    float blurMin; // 48
    float blurMax; // 4C
    float blurExponent; // 50
    float depth; // 54
    float density; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    CurveData<float> windDir; // 60
    CurveData<float> windSpeed; // 98
    CurveData<float> windScale; // D0
    CurveData<float> amplitude; // 108
    CurveData<float> lambda; // 140
    uint8_t unk178[0x180 - 0x178]; // 178
    HDRColor lightAbsorptionColor; // 180
    HDRColor lightDecayColor; // 190
    Ref<CBitmapTexture> globalWaterMask; // 1A0
    uint8_t unk1B8[0x1C0 - 0x1B8]; // 1B8
};
RED4EXT_ASSERT_SIZE(WaterAreaSettings, 0x1C0);
} // namespace RED4ext

// clang-format on
