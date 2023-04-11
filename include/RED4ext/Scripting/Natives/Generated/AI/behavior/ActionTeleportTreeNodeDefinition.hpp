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
struct ActionTeleportTreeNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionTeleportTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> destinationPoint; // 40
    Handle<AI::ArgumentMapping> doNavTest; // 50
    Handle<AI::ArgumentMapping> rotation; // 60
    Handle<AI::ArgumentMapping> waitForPositionUpdate; // 70
};
RED4EXT_ASSERT_SIZE(ActionTeleportTreeNodeDefinition, 0x80);
} // namespace AI::behavior
using AIbehaviorActionTeleportTreeNodeDefinition = AI::behavior::ActionTeleportTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
