#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game {
enum class PSMRangedWeaponStates : int32_t
{
    Any = -1,
    Default = 0,
    Charging = 1,
    Reload = 2,
    QuickMelee = 3,
    NoAmmo = 4,
    Ready = 5,
    Safe = 6,
    Overheat = 7,
    Shoot = 8,
};
} // namespace game
using gamePSMRangedWeaponStates = game::PSMRangedWeaponStates;
} // namespace RED4ext

// clang-format on
