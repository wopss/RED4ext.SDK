#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/text/TextBlockFontStyle.hpp>

namespace RED4ext
{
namespace text
{
struct __declspec(align(0x10)) TextBlockStyle
{
    static constexpr const char* NAME = "textTextBlockStyle";
    static constexpr const char* ALIAS = NAME;

    HDRColor tintColor; // 00
    Vector2 shadowOffset; // 10
    uint8_t unk18[0x20 - 0x18]; // 18
    HDRColor shadowColor; // 20
    text::TextBlockFontStyle fontStyle; // 30
    uint8_t unkA0[0xA8 - 0xA0]; // A0
    uint16_t fontSize; // A8
    uint8_t unkAA[0xB0 - 0xAA]; // AA
};
RED4EXT_ASSERT_SIZE(TextBlockStyle, 0xB0);
} // namespace text
using textTextBlockStyle = text::TextBlockStyle;
} // namespace RED4ext

// clang-format on
