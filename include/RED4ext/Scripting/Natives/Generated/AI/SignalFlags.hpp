#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI { 
enum class SignalFlags : uint32_t
{
    Undefined = 0,
    OverridesSelf = 1,
    InterruptsSamePriorityTask = 2,
    InterruptsForcedBehavior = 4,
    AcceptsAdditives = 8,
};
} // namespace AI
} // namespace RED4ext
