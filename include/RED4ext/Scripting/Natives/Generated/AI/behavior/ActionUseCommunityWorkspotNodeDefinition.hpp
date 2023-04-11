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
struct ActionUseCommunityWorkspotNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorActionUseCommunityWorkspotNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> workspotData; // 40
    Handle<AI::ArgumentMapping> dependentWorkspotData; // 50
    Handle<AI::ArgumentMapping> playExitAutomatically; // 60
    Handle<AI::ArgumentMapping> fastForwardAfterTeleport; // 70
};
RED4EXT_ASSERT_SIZE(ActionUseCommunityWorkspotNodeDefinition, 0x80);
} // namespace AI::behavior
using AIbehaviorActionUseCommunityWorkspotNodeDefinition = AI::behavior::ActionUseCommunityWorkspotNodeDefinition;
} // namespace RED4ext

// clang-format on
