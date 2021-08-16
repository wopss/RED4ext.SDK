#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct Vector2
{
    static constexpr const char* NAME = "Vector2";
    static constexpr const char* ALIAS = NAME;

    float X; // 00
    float Y; // 04
};
RED4EXT_ASSERT_SIZE(Vector2, 0x8);
} // namespace RED4ext
