#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct InstantConditionNodeDefinition : AI::behavior::ConditionNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorInstantConditionNodeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(InstantConditionNodeDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorInstantConditionNodeDefinition = AI::behavior::InstantConditionNodeDefinition;
} // namespace RED4ext

// clang-format on
