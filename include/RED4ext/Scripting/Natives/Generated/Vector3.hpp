#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct Vector3
{
    static constexpr const char* NAME = "Vector3";
    static constexpr const char* ALIAS = NAME;

    float X; // 00
    float Y; // 04
    float Z; // 08
};
RED4EXT_ASSERT_SIZE(Vector3, 0xC);
} // namespace RED4ext
