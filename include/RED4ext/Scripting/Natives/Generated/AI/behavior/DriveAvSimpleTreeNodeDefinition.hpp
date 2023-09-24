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
struct DriveAvSimpleTreeNodeDefinition : AI::behavior::DriveTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorDriveAvSimpleTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> timeToTravel; // 40
    Handle<AI::ArgumentMapping> distanceToTravel; // 50
    Handle<AI::ArgumentMapping> useEaseInFunction; // 60
    Handle<AI::ArgumentMapping> useEaseOutFunction; // 70
    Handle<AI::ArgumentMapping> movementDirection; // 80
    Handle<AI::ArgumentMapping> useForwardDirection; // 90
    Handle<AI::ArgumentMapping> easeBounceMultiplier; // A0
    Handle<AI::ArgumentMapping> despawnAtTheEnd; // B0
    Handle<AI::ArgumentMapping> disableVFXs; // C0
    Handle<AI::ArgumentMapping> facePlayer; // D0
    Handle<AI::ArgumentMapping> doLandingRotation; // E0
    Handle<AI::ArgumentMapping> interruptTaskOnLandingFound; // F0
    Handle<AI::ArgumentMapping> attemptToSendEarlyDismountCommand; // 100
};
RED4EXT_ASSERT_SIZE(DriveAvSimpleTreeNodeDefinition, 0x110);
} // namespace AI::behavior
using AIbehaviorDriveAvSimpleTreeNodeDefinition = AI::behavior::DriveAvSimpleTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
