#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace move {
enum class LocomotionAction : int32_t
{
    Undefined = 0,
    Exploration = 1,
    Idle = 2,
    IdleTurn = 3,
    Reposition = 4,
    Start = 5,
    Move = 6,
    Stop = 7,
};
} // namespace move
using moveLocomotionAction = move::LocomotionAction;
} // namespace RED4ext

// clang-format on
