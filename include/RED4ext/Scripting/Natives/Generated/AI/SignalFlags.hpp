#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI {
enum class SignalFlags : int32_t
{
    Undefined = 0,
    OverridesSelf = 1,
    InterruptsSamePriorityTask = 2,
    InterruptsForcedBehavior = 4,
    AcceptsAdditives = 8,
};
} // namespace AI
using AISignalFlags = AI::SignalFlags;
} // namespace RED4ext

// clang-format on
