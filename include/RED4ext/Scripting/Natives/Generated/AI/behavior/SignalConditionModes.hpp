#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI::behavior {
enum class SignalConditionModes : int32_t
{
    CurrentValue = 0,
    StartOfFrameValue = 1,
    RisingEdge = 2,
    FallingEdge = 3,
    AnyEdge = 4,
};
} // namespace AI::behavior
using AIbehaviorSignalConditionModes = AI::behavior::SignalConditionModes;
} // namespace RED4ext

// clang-format on
