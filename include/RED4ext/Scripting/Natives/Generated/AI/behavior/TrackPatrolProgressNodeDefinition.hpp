#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DecoratorNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior { 
struct TrackPatrolProgressNodeDefinition : AI::behavior::DecoratorNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorTrackPatrolProgressNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> pathParameters; // 40
    Handle<AI::ArgumentMapping> patrolProgress; // 50
    Handle<AI::ArgumentMapping> startFromClosestPoint; // 60
    Handle<AI::ArgumentMapping> teleportPositionAfterTimeSkipping; // 70
    Handle<AI::ArgumentMapping> teleportRotationAfterTimeSkipping; // 80
    Handle<AI::ArgumentMapping> handleTeleportRequest; // 90
    Handle<AI::ArgumentMapping> fastForwardAfterTeleport; // A0
};
RED4EXT_ASSERT_SIZE(TrackPatrolProgressNodeDefinition, 0xB0);
} // namespace AI::behavior
} // namespace RED4ext
