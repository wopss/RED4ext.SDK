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
struct DrivePanicTreeNodeDefinition : AI::behavior::DriveTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorDrivePanicTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> allowSimplifiedMovement; // 40
    Handle<AI::ArgumentMapping> ignoreTickets; // 50
    Handle<AI::ArgumentMapping> disableStuckDetection; // 60
    Handle<AI::ArgumentMapping> useSpeedBasedLookupRange; // 70
    Handle<AI::ArgumentMapping> tryDriveAwayFromPlayer; // 80
    Handle<AI::ArgumentMapping> needDriver; // 90
};
RED4EXT_ASSERT_SIZE(DrivePanicTreeNodeDefinition, 0xA0);
} // namespace AI::behavior
using AIbehaviorDrivePanicTreeNodeDefinition = AI::behavior::DrivePanicTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
