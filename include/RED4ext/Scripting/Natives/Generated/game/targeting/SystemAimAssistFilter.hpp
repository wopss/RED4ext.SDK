#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::targeting {
struct SystemAimAssistFilter
{
    uint16_t Melee : 1; // 0
    uint16_t Shooting : 1; // 1
    uint16_t Scanning : 1; // 2
    uint16_t QuickHack : 1; // 3
    uint16_t ShootingLimbCyber : 1; // 4
    uint16_t HeadTarget : 1; // 5
    uint16_t LegTarget : 1; // 6
    uint16_t MechanicalTarget : 1; // 7
    uint16_t DriverCombat : 1; // 8
    uint16_t BreachTarget : 1; // 9
    uint16_t b10 : 1; // 10
    uint16_t b11 : 1; // 11
    uint16_t b12 : 1; // 12
    uint16_t b13 : 1; // 13
    uint16_t b14 : 1; // 14
    uint16_t b15 : 1; // 15
};
RED4EXT_ASSERT_SIZE(SystemAimAssistFilter, 0x2);
} // namespace game::targeting
} // namespace RED4ext

// clang-format on
