#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace AI::behavior { struct ConditionDefinition; }

namespace AI::behavior
{
struct MonitorConditionDefinition : ISerializable
{
    static constexpr const char* NAME = "AIbehaviorMonitorConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::ConditionDefinition> condition; // 30
    float timeout; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(MonitorConditionDefinition, 0x48);
} // namespace AI::behavior
using AIbehaviorMonitorConditionDefinition = AI::behavior::MonitorConditionDefinition;
} // namespace RED4ext

// clang-format on
