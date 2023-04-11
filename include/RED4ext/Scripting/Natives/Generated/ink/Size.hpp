#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ink
{
struct Size
{
    static constexpr const char* NAME = "inkSize";
    static constexpr const char* ALIAS = NAME;

    float width; // 00
    float height; // 04
};
RED4EXT_ASSERT_SIZE(Size, 0x8);
} // namespace ink
using inkSize = ink::Size;
} // namespace RED4ext

// clang-format on
