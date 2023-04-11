#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DistanceToTargetConditionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct DistanceToTargetPositionConditionDefinition : AI::behavior::DistanceToTargetConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorDistanceToTargetPositionConditionDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DistanceToTargetPositionConditionDefinition, 0x60);
} // namespace AI::behavior
using AIbehaviorDistanceToTargetPositionConditionDefinition = AI::behavior::DistanceToTargetPositionConditionDefinition;
} // namespace RED4ext

// clang-format on
