#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct CBitmapTexture;

struct WaterAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "WaterAreaSettings";
    static constexpr const char* ALIAS = NAME;

    float blurMin; // 48
    float blurMax; // 4C
    float blurExponent; // 50
    float depth; // 54
    float density; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    HDRColor lightAbsorptionColor; // 60
    HDRColor lightDecayColor; // 70
    Ref<CBitmapTexture> globalWaterMask; // 80
    uint8_t unk98[0xA0 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(WaterAreaSettings, 0xA0);
} // namespace RED4ext
