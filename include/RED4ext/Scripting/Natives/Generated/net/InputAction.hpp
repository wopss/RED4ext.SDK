#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace net { 
struct InputAction
{
    static constexpr const char* NAME = "netInputAction";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x18 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(InputAction, 0x18);
} // namespace net
} // namespace RED4ext
