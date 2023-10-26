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

    ink::GradientMode gradientMode; // 230
    uint8_t unk231[0x234 - 0x231]; // 231
    float angle; // 234
    uint8_t unk238[0x240 - 0x238]; // 238
    HDRColor startColor; // 240
    HDRColor endColor; // 250
    uint8_t unk260[0x270 - 0x260]; // 260
};
RED4EXT_ASSERT_SIZE(GradientWidget, 0x270);
} // namespace ink
using inkGradientWidget = ink::GradientWidget;
using inkGradient = ink::GradientWidget;
} // namespace RED4ext

// clang-format on
