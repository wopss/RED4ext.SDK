#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace net { 
struct InputOrientation
{
    static constexpr const char* NAME = "netInputOrientation";
    static constexpr const char* ALIAS = NAME;

    float yaw; // 00
    float pitch; // 04
};
RED4EXT_ASSERT_SIZE(InputOrientation, 0x8);
} // namespace net
} // namespace RED4ext
