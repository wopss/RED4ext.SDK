#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct RectF
{
    static constexpr const char* NAME = "RectF";
    static constexpr const char* ALIAS = NAME;

    float Left; // 00
    float Top; // 04
    float Right; // 08
    float Bottom; // 0C
};
RED4EXT_ASSERT_SIZE(RectF, 0x10);
} // namespace RED4ext

// clang-format on
