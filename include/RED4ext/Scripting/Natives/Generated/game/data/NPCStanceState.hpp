#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class NPCStanceState : int32_t
{
    Any = 0,
    Cover = 1,
    Crouch = 2,
    Stand = 3,
    Swim = 4,
    Vehicle = 5,
    VehicleWindow = 6,
    Count = 7,
    Invalid = 8,
};
} // namespace game::data
using gamedataNPCStanceState = game::data::NPCStanceState;
} // namespace RED4ext

// clang-format on
