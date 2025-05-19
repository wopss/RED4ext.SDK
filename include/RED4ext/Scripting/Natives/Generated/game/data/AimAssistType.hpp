#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class AimAssistType : int32_t
{
    BreachTarget = 0,
    ChestTarget = 1,
    DriverCombat = 2,
    HeadTarget = 3,
    LegTarget = 4,
    MechanicalTarget = 5,
    Melee = 6,
    None = 7,
    QuickHack = 8,
    Scanning = 9,
    Shooting = 10,
    ShootingLimbCyber = 11,
    WeakSpotTarget = 12,
    Count = 13,
    Invalid = 14,
};
} // namespace game::data
using gamedataAimAssistType = game::data::AimAssistType;
} // namespace RED4ext

// clang-format on
