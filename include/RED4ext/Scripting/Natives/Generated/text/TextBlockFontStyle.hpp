#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>

namespace RED4ext
{
namespace text
{
struct __declspec(align(0x10)) TextBlockFontStyle
{
    static constexpr const char* NAME = "textTextBlockFontStyle";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
    CName fontStyle; // 10
    uint8_t unk18[0x50 - 0x18]; // 18
    int32_t outlineSize; // 50
    uint8_t unk54[0x60 - 0x54]; // 54
    HDRColor outlineColor; // 60
};
RED4EXT_ASSERT_SIZE(TextBlockFontStyle, 0x70);
} // namespace text
using textTextBlockFontStyle = text::TextBlockFontStyle;
} // namespace RED4ext

// clang-format on
