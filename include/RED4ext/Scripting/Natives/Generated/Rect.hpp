#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct Rect
{
    static constexpr const char* NAME = "Rect";
    static constexpr const char* ALIAS = NAME;

    int32_t left; // 00
    int32_t top; // 04
    int32_t right; // 08
    int32_t bottom; // 0C
};
RED4EXT_ASSERT_SIZE(Rect, 0x10);
} // namespace RED4ext

// clang-format on
