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
struct MonitorConditionNodeDefinition : AI::behavior::ConditionNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorMonitorConditionNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    float timeout; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(MonitorConditionNodeDefinition, 0x60);
} // namespace AI::behavior
using AIbehaviorMonitorConditionNodeDefinition = AI::behavior::MonitorConditionNodeDefinition;
} // namespace RED4ext

// clang-format on
