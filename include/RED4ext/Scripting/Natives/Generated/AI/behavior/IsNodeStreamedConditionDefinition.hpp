#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct IsNodeStreamedConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorIsNodeStreamedConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> nodeRef; // 38
};
RED4EXT_ASSERT_SIZE(IsNodeStreamedConditionDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorIsNodeStreamedConditionDefinition = AI::behavior::IsNodeStreamedConditionDefinition;
} // namespace RED4ext

// clang-format on
