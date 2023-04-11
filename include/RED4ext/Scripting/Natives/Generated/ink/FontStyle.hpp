#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace rend { struct Font; }

namespace ink
{
struct FontStyle
{
    static constexpr const char* NAME = "inkFontStyle";
    static constexpr const char* ALIAS = NAME;

    CName styleName; // 00
    Ref<rend::Font> font; // 08
};
RED4EXT_ASSERT_SIZE(FontStyle, 0x20);
} // namespace ink
using inkFontStyle = ink::FontStyle;
} // namespace RED4ext

// clang-format on
