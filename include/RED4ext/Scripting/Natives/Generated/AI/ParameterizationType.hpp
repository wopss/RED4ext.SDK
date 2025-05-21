#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace AI {
enum class ParameterizationType : int32_t
{
    BehaviorArgument = 0,
    CustomValue = 1,
    CharacterRecord = 2,
    TweakDB = 3,
    ActionRecord = 4,
    Blackboard = 5,
    Delegate = 6,
};
} // namespace AI
using AIParameterizationType = AI::ParameterizationType;
} // namespace RED4ext

// clang-format on
