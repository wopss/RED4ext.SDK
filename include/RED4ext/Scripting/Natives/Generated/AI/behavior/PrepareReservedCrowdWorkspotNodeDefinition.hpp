#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DecoratorNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct PrepareReservedCrowdWorkspotNodeDefinition : AI::behavior::DecoratorNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorPrepareReservedCrowdWorkspotNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> workspotData; // 40
    Handle<AI::ArgumentMapping> returnPosition; // 50
    Handle<AI::ArgumentMapping> returnPositionVector; // 60
    Handle<AI::ArgumentMapping> workspotExitTangent; // 70
    Handle<AI::ArgumentMapping> joinTrafficSettings; // 80
    Handle<AI::ArgumentMapping> overrideExit; // 90
};
RED4EXT_ASSERT_SIZE(PrepareReservedCrowdWorkspotNodeDefinition, 0xA0);
} // namespace AI::behavior
using AIbehaviorPrepareReservedCrowdWorkspotNodeDefinition = AI::behavior::PrepareReservedCrowdWorkspotNodeDefinition;
} // namespace RED4ext

// clang-format on
