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
struct WaitWorldPositionConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorWaitWorldPositionConditionDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(WaitWorldPositionConditionDefinition, 0x38);
} // namespace AI::behavior
using AIbehaviorWaitWorldPositionConditionDefinition = AI::behavior::WaitWorldPositionConditionDefinition;
} // namespace RED4ext

// clang-format on
