#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class AttackType : int32_t
{
    ChargedWhipAttack = 0,
    Direct = 1,
    Effect = 2,
    Explosion = 3,
    ForceKill = 4,
    GuardBreak = 5,
    Hack = 6,
    Melee = 7,
    PressureWave = 8,
    QuickMelee = 9,
    Ranged = 10,
    Reflect = 11,
    StrongMelee = 12,
    Thrown = 13,
    WhipAttack = 14,
    Count = 15,
    Invalid = 16,
};
} // namespace game::data
using gamedataAttackType = game::data::AttackType;
} // namespace RED4ext

// clang-format on
