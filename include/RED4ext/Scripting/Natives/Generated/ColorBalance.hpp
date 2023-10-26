#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) ColorBalance
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

// clang-format on
