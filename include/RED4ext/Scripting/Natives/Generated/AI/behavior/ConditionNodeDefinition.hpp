#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/CompletionStatus.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DecoratorNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { struct ConditionDefinition; }

namespace AI::behavior
{
struct ConditionNodeDefinition : AI::behavior::DecoratorNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorConditionNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::ConditionDefinition> condition; // 40
    AI::behavior::CompletionStatus resultIfFailed; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(ConditionNodeDefinition, 0x58);
} // namespace AI::behavior
using AIbehaviorConditionNodeDefinition = AI::behavior::ConditionNodeDefinition;
} // namespace RED4ext

// clang-format on
