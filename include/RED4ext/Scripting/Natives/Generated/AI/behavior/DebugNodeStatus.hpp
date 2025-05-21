#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI::behavior {
enum class DebugNodeStatus : int8_t
{
    Undefined = 0,
    NotRunning = 1,
    ForceStopped = 2,
    Running = 3,
    Success = 4,
    Failure = 5,
};
} // namespace AI::behavior
using AIbehaviorDebugNodeStatus = AI::behavior::DebugNodeStatus;
} // namespace RED4ext

// clang-format on
