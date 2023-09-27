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
struct ActionMoveToWorkspotNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionMoveToWorkspotNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> workspotSetup; // 40
    Handle<AI::ArgumentMapping> lookAtTarget; // 50
    Handle<AI::ArgumentMapping> tolerance; // 60
    Handle<AI::ArgumentMapping> movementType; // 70
    Handle<AI::ArgumentMapping> ignoreNavigation; // 80
    Handle<AI::ArgumentMapping> rotateEntity; // 90
    Handle<AI::ArgumentMapping> useStart; // A0
    Handle<AI::ArgumentMapping> spotReservation; // B0
    Handle<AI::ArgumentMapping> startTangent; // C0
    Handle<AI::ArgumentMapping> fastForwardAfterTeleport; // D0
    Handle<AI::ArgumentMapping> ignoreExploration; // E0
    Handle<AI::ArgumentMapping> failWhenStoppedByCollision; // F0
};
RED4EXT_ASSERT_SIZE(ActionMoveToWorkspotNodeDefinition, 0x100);
} // namespace AI::behavior
using AIbehaviorActionMoveToWorkspotNodeDefinition = AI::behavior::ActionMoveToWorkspotNodeDefinition;
} // namespace RED4ext

// clang-format on
