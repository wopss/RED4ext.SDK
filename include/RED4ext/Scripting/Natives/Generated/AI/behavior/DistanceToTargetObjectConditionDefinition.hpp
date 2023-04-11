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
struct DistanceToTargetObjectConditionDefinition : AI::behavior::DistanceToTargetConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorDistanceToTargetObjectConditionDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DistanceToTargetObjectConditionDefinition, 0x60);
} // namespace AI::behavior
using AIbehaviorDistanceToTargetObjectConditionDefinition = AI::behavior::DistanceToTargetObjectConditionDefinition;
} // namespace RED4ext

// clang-format on
