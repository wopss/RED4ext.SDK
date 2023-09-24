#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/StyleProperty.hpp>

namespace RED4ext
{
namespace ink
{
struct Style
{
    static constexpr const char* NAME = "inkStyle";
    static constexpr const char* ALIAS = NAME;

    CName styleID; // 00
    CName state; // 08
    DynArray<ink::StyleProperty> properties; // 10
};
RED4EXT_ASSERT_SIZE(Style, 0x20);
} // namespace ink
using inkStyle = ink::Style;
} // namespace RED4ext

// clang-format on
