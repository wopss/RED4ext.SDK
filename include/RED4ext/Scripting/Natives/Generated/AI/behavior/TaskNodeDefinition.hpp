#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DecoratorNodeDefinition.hpp>

namespace RED4ext
{
namespace AI::behavior { struct TaskDefinition; }

namespace AI::behavior
{
struct TaskNodeDefinition : AI::behavior::DecoratorNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorTaskNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::behavior::TaskDefinition> task; // 40
};
RED4EXT_ASSERT_SIZE(TaskNodeDefinition, 0x50);
} // namespace AI::behavior
using AIbehaviorTaskNodeDefinition = AI::behavior::TaskNodeDefinition;
} // namespace RED4ext

// clang-format on
