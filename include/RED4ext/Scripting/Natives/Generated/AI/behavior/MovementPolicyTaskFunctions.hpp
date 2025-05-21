#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI::behavior {
enum class MovementPolicyTaskFunctions : int32_t
{
    SetMovementType = 0,
    SetTargetObject = 1,
    UseFollowSlots = 2,
    SetLocalTargetOffset = 3,
    SetIgnoreNavigation = 4,
    SetStrafingTarget = 5,
};
} // namespace AI::behavior
using AIbehaviorMovementPolicyTaskFunctions = AI::behavior::MovementPolicyTaskFunctions;
} // namespace RED4ext

// clang-format on
