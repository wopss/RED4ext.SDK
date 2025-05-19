#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI::behavior {
enum class StateCompletionStatus : int32_t
{
    ForwardBehaviorStatus = 0,
    Failure = 1,
    Success = 2,
};
} // namespace AI::behavior
using AIbehaviorStateCompletionStatus = AI::behavior::StateCompletionStatus;
} // namespace RED4ext

// clang-format on
