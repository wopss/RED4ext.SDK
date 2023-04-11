#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/PassiveExpressionDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct CommandConditionExpressionDefinition : AI::behavior::PassiveExpressionDefinition
{
    static constexpr const char* NAME = "AIbehaviorCommandConditionExpressionDefinition";
    static constexpr const char* ALIAS = NAME;

    CName commandName; // 40
    bool useInheritance; // 48
    bool isEnqueued; // 49
    bool isExecuting; // 4A
    uint8_t unk4B[0x50 - 0x4B]; // 4B
};
RED4EXT_ASSERT_SIZE(CommandConditionExpressionDefinition, 0x50);
} // namespace AI::behavior
using AIbehaviorCommandConditionExpressionDefinition = AI::behavior::CommandConditionExpressionDefinition;
} // namespace RED4ext

// clang-format on
