#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::data {
enum class StatusEffectAIBehaviorFlag : int32_t
{
    AcceptsAdditives = 0,
    InterruptsForcedBehavior = 1,
    InterruptsSamePriorityTask = 2,
    None = 3,
    OverridesSelf = 4,
    Count = 5,
    Invalid = 6,
};
} // namespace game::data
using gamedataStatusEffectAIBehaviorFlag = game::data::StatusEffectAIBehaviorFlag;
} // namespace RED4ext

// clang-format on
