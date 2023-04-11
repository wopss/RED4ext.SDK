#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace ink
{
struct StyleThemeDescriptor
{
    static constexpr const char* NAME = "inkStyleThemeDescriptor";
    static constexpr const char* ALIAS = NAME;

    CName themeID; // 00
    CName themeNameLocKey; // 08
};
RED4EXT_ASSERT_SIZE(StyleThemeDescriptor, 0x10);
} // namespace ink
using inkStyleThemeDescriptor = ink::StyleThemeDescriptor;
} // namespace RED4ext

// clang-format on
