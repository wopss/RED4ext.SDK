#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ink { struct StyleResource; }

namespace ink
{
struct StyleTheme
{
    static constexpr const char* NAME = "inkStyleTheme";
    static constexpr const char* ALIAS = NAME;

    Ref<ink::StyleResource> styleResource; // 00
    CName themeID; // 18
};
RED4EXT_ASSERT_SIZE(StyleTheme, 0x20);
} // namespace ink
using inkStyleTheme = ink::StyleTheme;
} // namespace RED4ext

// clang-format on
