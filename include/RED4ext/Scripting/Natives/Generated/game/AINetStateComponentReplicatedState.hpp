#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/NetAIState.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IComponentState.hpp>

namespace RED4ext
{
namespace game
{
struct AINetStateComponentReplicatedState : net::IComponentState
{
    static constexpr const char* NAME = "gameAINetStateComponentReplicatedState";
    static constexpr const char* ALIAS = NAME;

    game::NetAIState replHighLevelState; // 20
    game::NetAIState replUpperBodyState; // 2C
    game::NetAIState replStanceState; // 38
    game::NetAIState replHitReactionModeState; // 44
    game::NetAIState replBehaviorState; // 50
    game::NetAIState replPhaseState; // 5C
    game::NetAIState replDefenseMode; // 68
    game::NetAIState replLocomotionMode; // 74
};
RED4EXT_ASSERT_SIZE(AINetStateComponentReplicatedState, 0x80);
} // namespace game
using gameAINetStateComponentReplicatedState = game::AINetStateComponentReplicatedState;
} // namespace RED4ext

// clang-format on
