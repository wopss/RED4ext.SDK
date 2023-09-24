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
struct PatrolActionNodeDefinition : AI::behavior::ActionTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorPatrolActionNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> path; // 40
    Handle<AI::ArgumentMapping> patrolProgress; // 50
    Handle<AI::ArgumentMapping> workspotData; // 60
    Handle<AI::ArgumentMapping> dependentWorkspotData; // 70
    Handle<AI::ArgumentMapping> lookAtTarget; // 80
    Handle<AI::ArgumentMapping> startFromClosestPoint; // 90
    Handle<AI::ArgumentMapping> patrolContinuationPolicy; // A0
    Handle<AI::ArgumentMapping> playStartAnimation; // B0
    Handle<AI::ArgumentMapping> fastForwardAfterTeleport; // C0
    Handle<AI::ArgumentMapping> useOffMeshLinkReservation; // D0
    Handle<AI::ArgumentMapping> usePathContext; // E0
};
RED4EXT_ASSERT_SIZE(PatrolActionNodeDefinition, 0xF0);
} // namespace AI::behavior
using AIbehaviorPatrolActionNodeDefinition = AI::behavior::PatrolActionNodeDefinition;
} // namespace RED4ext

// clang-format on
