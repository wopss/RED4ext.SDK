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
struct DrivePatrolTreeNodeDefinition : AI::behavior::DriveTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorDrivePatrolTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> maxSpeed; // 40
    Handle<AI::ArgumentMapping> minSpeed; // 50
    Handle<AI::ArgumentMapping> clearTrafficOnPath; // 60
    Handle<AI::ArgumentMapping> emergencyPatrol; // 70
    Handle<AI::ArgumentMapping> numPatrolLoops; // 80
    Handle<AI::ArgumentMapping> forcedStartSpeed; // 90
};
RED4EXT_ASSERT_SIZE(DrivePatrolTreeNodeDefinition, 0xA0);
} // namespace AI::behavior
using AIbehaviorDrivePatrolTreeNodeDefinition = AI::behavior::DrivePatrolTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
