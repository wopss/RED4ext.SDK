#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
struct LootSlotState
{
    uint8_t Looted : 1; // 0
    uint8_t Unavailable : 1; // 1
    uint8_t b2 : 1; // 2
    uint8_t b3 : 1; // 3
    uint8_t b4 : 1; // 4
    uint8_t b5 : 1; // 5
    uint8_t b6 : 1; // 6
    uint8_t b7 : 1; // 7
};
RED4EXT_ASSERT_SIZE(LootSlotState, 0x1);
} // namespace game
} // namespace RED4ext

// clang-format on
