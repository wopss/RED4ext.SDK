#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct Point
{
    static constexpr const char* NAME = "Point";
    static constexpr const char* ALIAS = NAME;

    int32_t x; // 00
    int32_t y; // 04
};
RED4EXT_ASSERT_SIZE(Point, 0x8);
} // namespace RED4ext

// clang-format on
