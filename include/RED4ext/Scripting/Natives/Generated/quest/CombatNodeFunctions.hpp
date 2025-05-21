#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace quest {
enum class CombatNodeFunctions : int32_t
{
    CombatTarget = 0,
    ShootAt = 1,
    LookAtTarget = 2,
    ThrowGrenade = 3,
    UseCover = 4,
    SwitchWeapon = 5,
    PrimaryWeapon = 6,
    SecondaryWeapon = 7,
    RestrictMovementToArea = 8,
};
} // namespace quest
using questCombatNodeFunctions = quest::CombatNodeFunctions;
} // namespace RED4ext

// clang-format on
