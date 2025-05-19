#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class AttackSubtype : int32_t
{
    BlockAttack = 0,
    BodySlamAttack = 1,
    ComboAttack = 2,
    CrouchAttack = 3,
    DeflectAttack = 4,
    EquipAttack = 5,
    FinalAttack = 6,
    JumpAttack = 7,
    SafeAttack = 8,
    SprintAttack = 9,
    SpyTreeMeleewareAttack = 10,
    ThrowAttack = 11,
    Count = 12,
    Invalid = 13,
};
} // namespace game::data
using gamedataAttackSubtype = game::data::AttackSubtype;
} // namespace RED4ext

// clang-format on
