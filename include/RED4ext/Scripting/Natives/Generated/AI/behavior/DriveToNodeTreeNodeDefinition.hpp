#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/DriveTreeNodeDefinition.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentMapping; }

namespace AI::behavior
{
struct DriveToNodeTreeNodeDefinition : AI::behavior::DriveTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorDriveToNodeTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> useKinematic; // 40
    Handle<AI::ArgumentMapping> needDriver; // 50
    Handle<AI::ArgumentMapping> nodeRef; // 60
    Handle<AI::ArgumentMapping> stopAtPathEnd; // 70
    Handle<AI::ArgumentMapping> secureTimeOut; // 80
    Handle<AI::ArgumentMapping> isPlayer; // 90
    Handle<AI::ArgumentMapping> useTraffic; // A0
    Handle<AI::ArgumentMapping> speedInTraffic; // B0
    Handle<AI::ArgumentMapping> forceGreenLights; // C0
    Handle<AI::ArgumentMapping> portals; // D0
    Handle<AI::ArgumentMapping> trafficTryNeighborsForStart; // E0
    Handle<AI::ArgumentMapping> trafficTryNeighborsForEnd; // F0
    Handle<AI::ArgumentMapping> ignoreNoAIDrivingLanes; // 100
};
RED4EXT_ASSERT_SIZE(DriveToNodeTreeNodeDefinition, 0x110);
} // namespace AI::behavior
using AIbehaviorDriveToNodeTreeNodeDefinition = AI::behavior::DriveToNodeTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
