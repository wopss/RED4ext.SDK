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
struct TrackPatrolProgressNodeDefinition : AI::behavior::DecoratorNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorTrackPatrolProgressNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> pathParameters; // 40
    Handle<AI::ArgumentMapping> patrolProgress; // 50
    Handle<AI::ArgumentMapping> startFromClosestPoint; // 60
    Handle<AI::ArgumentMapping> patrolContinuationPolicy; // 70
    Handle<AI::ArgumentMapping> teleportPositionAfterTimeSkipping; // 80
    Handle<AI::ArgumentMapping> teleportRotationAfterTimeSkipping; // 90
    Handle<AI::ArgumentMapping> handleTeleportRequest; // A0
    Handle<AI::ArgumentMapping> fastForwardAfterTeleport; // B0
};
RED4EXT_ASSERT_SIZE(TrackPatrolProgressNodeDefinition, 0xC0);
} // namespace AI::behavior
using AIbehaviorTrackPatrolProgressNodeDefinition = AI::behavior::TrackPatrolProgressNodeDefinition;
} // namespace RED4ext

// clang-format on
