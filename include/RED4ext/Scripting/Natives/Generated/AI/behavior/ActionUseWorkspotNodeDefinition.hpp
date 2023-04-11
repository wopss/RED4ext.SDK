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
struct ActionUseWorkspotNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionUseWorkspotNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> eventData; // 40
    Handle<AI::ArgumentMapping> playStartAnimationAfterwards; // 50
    Handle<AI::ArgumentMapping> mountData; // 60
    Handle<AI::ArgumentMapping> dependentWorkspotData; // 70
    Handle<AI::ArgumentMapping> playExitAutomatically; // 80
    Handle<AI::ArgumentMapping> markUninterruptable; // 90
    Handle<AI::ArgumentMapping> fastForwardAfterTeleport; // A0
};
RED4EXT_ASSERT_SIZE(ActionUseWorkspotNodeDefinition, 0xB0);
} // namespace AI::behavior
using AIbehaviorActionUseWorkspotNodeDefinition = AI::behavior::ActionUseWorkspotNodeDefinition;
} // namespace RED4ext

// clang-format on
