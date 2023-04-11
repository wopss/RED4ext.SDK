#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/BehaviorComponentDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct ConditionDefinition : AI::behavior::BehaviorComponentDefinition
{
    static constexpr const char* NAME = "AIbehaviorConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    bool isInverted; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(ConditionDefinition, 0x38);
} // namespace AI::behavior
using AIbehaviorConditionDefinition = AI::behavior::ConditionDefinition;
} // namespace RED4ext

// clang-format on
