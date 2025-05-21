#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI {
enum class PatrolContinuationPolicy : int32_t
{
    FromNextControlPoint = 0,
    FromClosestPoint = 1,
    FromBeginning = 2,
};
} // namespace AI
using AIPatrolContinuationPolicy = AI::PatrolContinuationPolicy;
} // namespace RED4ext

// clang-format on
