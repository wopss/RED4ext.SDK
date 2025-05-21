#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI {
enum class CommandState : int32_t
{
    NotExecuting = 0,
    Enqueued = 1,
    Executing = 2,
    Cancelled = 3,
    Interrupted = 4,
    Success = 5,
    Failure = 6,
};
} // namespace AI
using AICommandState = AI::CommandState;
} // namespace RED4ext

// clang-format on
