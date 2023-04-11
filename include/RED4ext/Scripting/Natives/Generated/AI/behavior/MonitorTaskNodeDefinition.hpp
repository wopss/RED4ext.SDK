#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TaskNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct MonitorTaskNodeDefinition : AI::behavior::TaskNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorMonitorTaskNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    float timeout; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(MonitorTaskNodeDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorMonitorTaskNodeDefinition = AI::behavior::MonitorTaskNodeDefinition;
} // namespace RED4ext

// clang-format on
