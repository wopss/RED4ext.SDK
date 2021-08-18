#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct ColorBalance
{
    static constexpr const char* NAME = "ColorBalance";
    static constexpr const char* ALIAS = NAME;

    float Red; // 00
    float Green; // 04
    float Blue; // 08
    float Luminance; // 0C
};
RED4EXT_ASSERT_SIZE(ColorBalance, 0x10);
} // namespace RED4ext
