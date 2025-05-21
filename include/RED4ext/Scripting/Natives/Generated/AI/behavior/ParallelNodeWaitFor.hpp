#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI::behavior {
enum class ParallelNodeWaitFor : int32_t
{
    LeftChild = 0,
    RightChild = 1,
    BothChildren = 2,
    AnyChild = 3,
};
} // namespace AI::behavior
using AIbehaviorParallelNodeWaitFor = AI::behavior::ParallelNodeWaitFor;
} // namespace RED4ext

// clang-format on
