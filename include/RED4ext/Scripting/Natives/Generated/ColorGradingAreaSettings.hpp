#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ColorBalance.hpp>
#include <RED4ext/Scripting/Natives/Generated/ColorGradingLutParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) ColorGradingAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "ColorGradingAreaSettings";
    static constexpr const char* ALIAS = NAME;

    float contrast; // 48
    float contrastPivot; // 4C
    float saturation; // 50
    float hue; // 54
    float brightness; // 58
    float lowRange; // 5C
    float highRange; // 60
    uint8_t unk64[0x70 - 0x64]; // 64
    ColorBalance lift; // 70
    ColorBalance gammaValue; // 80
    ColorBalance gain; // 90
    ColorBalance offset; // A0
    ColorBalance shadowOffset; // B0
    ColorBalance midtoneOffset; // C0
    ColorBalance highlightOffset; // D0
    ColorGradingLutParams ldrLut; // E0
    ColorGradingLutParams hdrLut; // 100
    bool forceHdrLut; // 120
    uint8_t unk121[0x130 - 0x121]; // 121
};
RED4EXT_ASSERT_SIZE(ColorGradingAreaSettings, 0x130);
} // namespace RED4ext

// clang-format on
