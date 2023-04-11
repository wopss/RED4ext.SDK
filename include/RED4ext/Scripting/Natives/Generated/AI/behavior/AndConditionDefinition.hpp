#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/CompositeConditionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct AndConditionDefinition : AI::behavior::CompositeConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorAndConditionDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AndConditionDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorAndConditionDefinition = AI::behavior::AndConditionDefinition;
} // namespace RED4ext

// clang-format on
