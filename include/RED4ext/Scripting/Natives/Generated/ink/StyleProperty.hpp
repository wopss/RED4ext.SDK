#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ink
{
struct StyleProperty
{
    static constexpr const char* NAME = "inkStyleProperty";
    static constexpr const char* ALIAS = NAME;

    CName propertyPath; // 00
    Variant value; // 08
};
RED4EXT_ASSERT_SIZE(StyleProperty, 0x20);
} // namespace ink
using inkStyleProperty = ink::StyleProperty;
} // namespace RED4ext

// clang-format on
