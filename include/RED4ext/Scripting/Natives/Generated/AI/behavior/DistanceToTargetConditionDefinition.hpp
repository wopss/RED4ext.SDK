#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct DistanceToTargetConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorDistanceToTargetConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> target; // 38
    Handle<AI::ArgumentMapping> distance; // 48
    EComparisonType comparisonOperator; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(DistanceToTargetConditionDefinition, 0x60);
} // namespace AI::behavior
using AIbehaviorDistanceToTargetConditionDefinition = AI::behavior::DistanceToTargetConditionDefinition;
} // namespace RED4ext

// clang-format on
