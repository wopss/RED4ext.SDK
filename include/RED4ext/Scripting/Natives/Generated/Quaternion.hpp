#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct Quaternion
{
    static constexpr const char* NAME = "Quaternion";
    static constexpr const char* ALIAS = NAME;

    float i; // 00
    float j; // 04
    float k; // 08
    float r; // 0C
};
RED4EXT_ASSERT_SIZE(Quaternion, 0x10);
} // namespace RED4ext
