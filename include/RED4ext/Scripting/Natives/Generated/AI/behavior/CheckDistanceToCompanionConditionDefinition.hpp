#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/CompanionConditionDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/EComparisonType.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct CheckDistanceToCompanionConditionDefinition : AI::behavior::CompanionConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorCheckDistanceToCompanionConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> distance; // 58
    EComparisonType comparisonOperator; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(CheckDistanceToCompanionConditionDefinition, 0x70);
} // namespace AI::behavior
using AIbehaviorCheckDistanceToCompanionConditionDefinition = AI::behavior::CheckDistanceToCompanionConditionDefinition;
} // namespace RED4ext

// clang-format on
