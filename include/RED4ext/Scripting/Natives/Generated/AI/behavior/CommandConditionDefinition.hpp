#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ConditionDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct CommandConditionDefinition : AI::behavior::ConditionDefinition
{
    static constexpr const char* NAME = "AIbehaviorCommandConditionDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> commandName; // 38
    Handle<AI::ArgumentMapping> commandOut; // 48
    bool useInheritance; // 58
    bool isWaiting; // 59
    bool isExecuting; // 5A
    uint8_t unk5B[0x60 - 0x5B]; // 5B
};
RED4EXT_ASSERT_SIZE(CommandConditionDefinition, 0x60);
} // namespace AI::behavior
using AIbehaviorCommandConditionDefinition = AI::behavior::CommandConditionDefinition;
} // namespace RED4ext

// clang-format on
