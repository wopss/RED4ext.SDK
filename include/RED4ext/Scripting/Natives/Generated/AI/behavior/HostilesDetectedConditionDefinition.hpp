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
struct HostilesDetectedConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorHostilesDetectedConditionDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(HostilesDetectedConditionDefinition, 0x38);
} // namespace AI::behavior
using AIbehaviorHostilesDetectedConditionDefinition = AI::behavior::HostilesDetectedConditionDefinition;
} // namespace RED4ext

// clang-format on
