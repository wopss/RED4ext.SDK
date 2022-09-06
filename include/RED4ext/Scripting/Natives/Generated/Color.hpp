#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct Color
{
    static constexpr const char* NAME = "Color";
    static constexpr const char* ALIAS = NAME;

    uint8_t Red; // 00
    uint8_t Green; // 01
    uint8_t Blue; // 02
    uint8_t Alpha; // 03
};
RED4EXT_ASSERT_SIZE(Color, 0x4);
} // namespace RED4ext

// clang-format on
