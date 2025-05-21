#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class AIActionType : int32_t
{
    BackUp = 0,
    BattleCry = 1,
    Block = 2,
    CallOff = 3,
    Charge = 4,
    Crouch = 5,
    Dash = 6,
    GrenadeThrow = 7,
    GroupReaction = 8,
    Investigate = 9,
    Melee = 10,
    Peek = 11,
    Quickhack = 12,
    Reprimand = 13,
    Search = 14,
    Shoot = 15,
    Sync = 16,
    TakeCover = 17,
    Takedown = 18,
    Taunt = 19,
    Count = 20,
    Invalid = 21,
};
} // namespace game::data
using gamedataAIActionType = game::data::AIActionType;
} // namespace RED4ext

// clang-format on
