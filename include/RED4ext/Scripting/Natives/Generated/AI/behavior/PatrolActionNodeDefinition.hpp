#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/ActionTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior { 
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
    Handle<AI::ArgumentMapping> playStartAnimation; // A0
    Handle<AI::ArgumentMapping> fastForwardAfterTeleport; // B0
};
RED4EXT_ASSERT_SIZE(PatrolActionNodeDefinition, 0xC0);
} // namespace AI::behavior
} // namespace RED4ext
