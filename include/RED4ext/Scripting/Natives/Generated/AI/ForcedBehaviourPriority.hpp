#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI {
enum class ForcedBehaviourPriority : int8_t
{
    AboveIdle = 0,
    AboveCombat = 1,
    AboveCriticalState = 2,
    AboveDeath = 3,
};
} // namespace AI
using AIForcedBehaviourPriority = AI::ForcedBehaviourPriority;
} // namespace RED4ext

// clang-format on
