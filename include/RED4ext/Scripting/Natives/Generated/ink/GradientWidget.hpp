#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/BaseShapeWidget.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/GradientMode.hpp>

namespace RED4ext
{
namespace ink
{
struct __declspec(align(0x10)) GradientWidget : ink::BaseShapeWidget
{
    static constexpr const char* NAME = "inkGradientWidget";
    static constexpr const char* ALIAS = "inkGradient";

    ink::GradientMode gradientMode; // 240
    uint8_t unk241[0x244 - 0x241]; // 241
    float angle; // 244
    uint8_t unk248[0x250 - 0x248]; // 248
    HDRColor startColor; // 250
    HDRColor endColor; // 260
    uint8_t unk270[0x280 - 0x270]; // 270
};
RED4EXT_ASSERT_SIZE(GradientWidget, 0x280);
} // namespace ink
using inkGradientWidget = ink::GradientWidget;
using inkGradient = ink::GradientWidget;
} // namespace RED4ext

// clang-format on
