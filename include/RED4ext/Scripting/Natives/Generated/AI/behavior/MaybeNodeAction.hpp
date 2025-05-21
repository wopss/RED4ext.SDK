#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI::behavior {
enum class MaybeNodeAction : int32_t
{
    Succeed = 0,
    Fail = 1,
    RepeatChild = 2,
};
} // namespace AI::behavior
using AIbehaviorMaybeNodeAction = AI::behavior::MaybeNodeAction;
} // namespace RED4ext

// clang-format on
