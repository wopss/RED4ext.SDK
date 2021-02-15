#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/HDRColor.hpp>
#include <RED4ext/Types/generated/ink/BaseShapeWidget.hpp>
#include <RED4ext/Types/generated/ink/GradientMode.hpp>

namespace RED4ext
{
namespace ink { 
struct GradientWidget : ink::BaseShapeWidget
{
    static constexpr const char* NAME = "inkGradientWidget";
    static constexpr const char* ALIAS = "inkGradient";

    ink::GradientMode gradientMode; // 220
    uint8_t unk221[0x224 - 0x221]; // 221
    float angle; // 224
    uint8_t unk228[0x230 - 0x228]; // 228
    HDRColor startColor; // 230
    HDRColor endColor; // 240
    uint8_t unk250[0x260 - 0x250]; // 250
};
RED4EXT_ASSERT_SIZE(GradientWidget, 0x260);
} // namespace ink
using inkGradient = ink::GradientWidget;
} // namespace RED4ext
