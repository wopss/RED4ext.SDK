#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) HDRColor
{
    static constexpr const char* NAME = "HDRColor";
    static constexpr const char* ALIAS = NAME;

    float Red; // 00
    float Green; // 04
    float Blue; // 08
    float Alpha; // 0C
};
RED4EXT_ASSERT_SIZE(HDRColor, 0x10);
} // namespace RED4ext

// clang-format on
