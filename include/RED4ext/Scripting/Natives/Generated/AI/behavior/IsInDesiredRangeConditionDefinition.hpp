#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/CompanionConditionDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct IsInDesiredRangeConditionDefinition : AI::behavior::CompanionConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorIsInDesiredRangeConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> desiredDistance; // 58
    Handle<AI::ArgumentMapping> deadZoneRadius; // 68
};
RED4EXT_ASSERT_SIZE(IsInDesiredRangeConditionDefinition, 0x78);
} // namespace AI::behavior
using AIbehaviorIsInDesiredRangeConditionDefinition = AI::behavior::IsInDesiredRangeConditionDefinition;
} // namespace RED4ext

// clang-format on
