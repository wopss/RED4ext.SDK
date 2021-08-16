#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct Vector4
{
    static constexpr const char* NAME = "Vector4";
    static constexpr const char* ALIAS = NAME;

    float X; // 00
    float Y; // 04
    float Z; // 08
    float W; // 0C
};
RED4EXT_ASSERT_SIZE(Vector4, 0x10);
} // namespace RED4ext
