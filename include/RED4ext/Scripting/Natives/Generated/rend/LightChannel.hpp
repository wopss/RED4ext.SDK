#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace rend {
struct LightChannel
{
    uint16_t LC_Channel1 : 1; // 0
    uint16_t LC_Channel2 : 1; // 1
    uint16_t LC_Channel3 : 1; // 2
    uint16_t LC_Channel4 : 1; // 3
    uint16_t LC_Channel5 : 1; // 4
    uint16_t LC_Channel6 : 1; // 5
    uint16_t LC_Channel7 : 1; // 6
    uint16_t LC_Channel8 : 1; // 7
    uint16_t LC_ChannelWorld : 1; // 8
    uint16_t LC_Character : 1; // 9
    uint16_t LC_Player : 1; // 10
    uint16_t b11 : 1; // 11
    uint16_t b12 : 1; // 12
    uint16_t b13 : 1; // 13
    uint16_t b14 : 1; // 14
    uint16_t LC_Automated : 1; // 15
};
RED4EXT_ASSERT_SIZE(LightChannel, 0x2);
} // namespace rend
} // namespace RED4ext

// clang-format on
