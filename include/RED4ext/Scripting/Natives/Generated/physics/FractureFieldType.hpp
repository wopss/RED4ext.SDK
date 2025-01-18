#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace physics {
struct FractureFieldType
{
    uint16_t FF_Default : 1; // 0
    uint16_t FF_Locomotion : 1; // 1
    uint16_t FF_TriggerDestructionEvent : 1; // 2
    uint16_t FF_FractureFieldNode : 1; // 3
    uint16_t FF_FractureFieldGameEffect : 1; // 4
    uint16_t FF_FractureFieldComponent : 1; // 5
    uint16_t b6 : 1; // 6
    uint16_t b7 : 1; // 7
    uint16_t b8 : 1; // 8
    uint16_t b9 : 1; // 9
    uint16_t b10 : 1; // 10
    uint16_t b11 : 1; // 11
    uint16_t b12 : 1; // 12
    uint16_t b13 : 1; // 13
    uint16_t b14 : 1; // 14
    uint16_t b15 : 1; // 15
};
RED4EXT_ASSERT_SIZE(FractureFieldType, 0x2);
} // namespace physics
} // namespace RED4ext

// clang-format on
