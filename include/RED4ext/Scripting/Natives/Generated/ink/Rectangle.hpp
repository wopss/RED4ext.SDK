#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ink
{
struct Rectangle
{
    static constexpr const char* NAME = "inkRectangle";
    static constexpr const char* ALIAS = NAME;

    float x; // 00
    float y; // 04
    float width; // 08
    float height; // 0C
};
RED4EXT_ASSERT_SIZE(Rectangle, 0x10);
} // namespace ink
using inkRectangle = ink::Rectangle;
} // namespace RED4ext

// clang-format on
