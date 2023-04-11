#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace ink
{
struct Margin
{
    static constexpr const char* NAME = "inkMargin";
    static constexpr const char* ALIAS = NAME;

    float left; // 00
    float top; // 04
    float right; // 08
    float bottom; // 0C
};
RED4EXT_ASSERT_SIZE(Margin, 0x10);
} // namespace ink
using inkMargin = ink::Margin;
} // namespace RED4ext

// clang-format on
