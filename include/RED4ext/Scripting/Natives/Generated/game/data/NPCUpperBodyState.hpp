#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class NPCUpperBodyState : int32_t
{
    Aim = 0,
    Any = 1,
    Attack = 2,
    ChargedAttack = 3,
    Defend = 4,
    Equip = 5,
    Normal = 6,
    Parry = 7,
    Reload = 8,
    Shoot = 9,
    Taunt = 10,
    Count = 11,
    Invalid = 12,
};
} // namespace game::data
using gamedataNPCUpperBodyState = game::data::NPCUpperBodyState;
} // namespace RED4ext

// clang-format on
