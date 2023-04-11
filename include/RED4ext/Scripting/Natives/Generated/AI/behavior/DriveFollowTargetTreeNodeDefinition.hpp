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
struct DriveFollowTargetTreeNodeDefinition : AI::behavior::DriveTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorDriveFollowTargetTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> useKinematic; // 40
    Handle<AI::ArgumentMapping> needDriver; // 50
    Handle<AI::ArgumentMapping> target; // 60
    Handle<AI::ArgumentMapping> secureTimeOut; // 70
    Handle<AI::ArgumentMapping> distanceMin; // 80
    Handle<AI::ArgumentMapping> distanceMax; // 90
    Handle<AI::ArgumentMapping> isPlayer; // A0
    Handle<AI::ArgumentMapping> stopHasReachedTarget; // B0
    Handle<AI::ArgumentMapping> useTraffic; // C0
    Handle<AI::ArgumentMapping> allowStubMovement; // D0
};
RED4EXT_ASSERT_SIZE(DriveFollowTargetTreeNodeDefinition, 0xE0);
} // namespace AI::behavior
using AIbehaviorDriveFollowTargetTreeNodeDefinition = AI::behavior::DriveFollowTargetTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
