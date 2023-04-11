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
struct IsBlockedByCompanionConditionDefinition : AI::behavior::CompanionConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorIsBlockedByCompanionConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> distance; // 58
};
RED4EXT_ASSERT_SIZE(IsBlockedByCompanionConditionDefinition, 0x68);
} // namespace AI::behavior
using AIbehaviorIsBlockedByCompanionConditionDefinition = AI::behavior::IsBlockedByCompanionConditionDefinition;
} // namespace RED4ext

// clang-format on
