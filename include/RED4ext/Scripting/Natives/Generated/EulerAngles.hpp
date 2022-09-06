#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct EulerAngles
{
    static constexpr const char* NAME = "EulerAngles";
    static constexpr const char* ALIAS = NAME;

    float Roll; // 00
    float Pitch; // 04
    float Yaw; // 08
};
RED4EXT_ASSERT_SIZE(EulerAngles, 0xC);
} // namespace RED4ext

// clang-format on
