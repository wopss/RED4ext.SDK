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
struct DriveToPointAutonomousTreeNodeDefinition : AI::behavior::DriveTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorDriveToPointAutonomousTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> targetPosition; // 40
    Handle<AI::ArgumentMapping> maxSpeed; // 50
    Handle<AI::ArgumentMapping> minSpeed; // 60
    Handle<AI::ArgumentMapping> clearTrafficOnPath; // 70
    Handle<AI::ArgumentMapping> minimumDistanceToTarget; // 80
    Handle<AI::ArgumentMapping> forcedStartSpeed; // 90
    Handle<AI::ArgumentMapping> driveDownTheRoadIndefinitely; // A0
};
RED4EXT_ASSERT_SIZE(DriveToPointAutonomousTreeNodeDefinition, 0xB0);
} // namespace AI::behavior
using AIbehaviorDriveToPointAutonomousTreeNodeDefinition = AI::behavior::DriveToPointAutonomousTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
