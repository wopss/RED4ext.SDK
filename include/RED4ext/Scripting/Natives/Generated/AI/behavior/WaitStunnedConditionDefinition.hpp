#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct WaitStunnedConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorWaitStunnedConditionDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(WaitStunnedConditionDefinition, 0x38);
} // namespace AI::behavior
using AIbehaviorWaitStunnedConditionDefinition = AI::behavior::WaitStunnedConditionDefinition;
} // namespace RED4ext

// clang-format on
