#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class NPCHighLevelState : int32_t
{
    Alerted = 0,
    Any = 1,
    Combat = 2,
    Dead = 3,
    Fear = 4,
    Relaxed = 5,
    Stealth = 6,
    Unconscious = 7,
    Wounded = 8,
    Count = 9,
    Invalid = 10,
};
} // namespace game::data
using gamedataNPCHighLevelState = game::data::NPCHighLevelState;
} // namespace RED4ext

// clang-format on
