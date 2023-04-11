#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ActionTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct ActionItemHandlingNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionItemHandlingNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> slotId; // 40
    Handle<AI::ArgumentMapping> duration; // 50
};
RED4EXT_ASSERT_SIZE(ActionItemHandlingNodeDefinition, 0x60);
} // namespace AI::behavior
using AIbehaviorActionItemHandlingNodeDefinition = AI::behavior::ActionItemHandlingNodeDefinition;
} // namespace RED4ext

// clang-format on
