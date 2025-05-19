#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::targeting {
enum class SystemScriptFilter : int32_t
{
    Melee = 1,
    Shooting = 2,
    Scanning = 4,
    QuickHack = 8,
    ShootingLimbCyber = 16,
    HeadTarget = 32,
    LegTarget = 64,
    MechanicalTarget = 128,
};
} // namespace game::targeting
using gametargetingSystemScriptFilter = game::targeting::SystemScriptFilter;
using TargetComponentFilterType = game::targeting::SystemScriptFilter;
} // namespace RED4ext

// clang-format on
