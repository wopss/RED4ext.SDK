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
struct DriveChaseTargetTreeNodeDefinition : AI::behavior::DriveTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorDriveChaseTargetTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> target; // 40
    Handle<AI::ArgumentMapping> distanceMin; // 50
    Handle<AI::ArgumentMapping> distanceMax; // 60
    Handle<AI::ArgumentMapping> forcedStartSpeed; // 70
    Handle<AI::ArgumentMapping> needDriver; // 80
    Handle<AI::ArgumentMapping> aggressiveRammingEnabled; // 90
    Handle<AI::ArgumentMapping> ignoreChaseVehiclesLimit; // A0
    Handle<AI::ArgumentMapping> boostDrivingStats; // B0
};
RED4EXT_ASSERT_SIZE(DriveChaseTargetTreeNodeDefinition, 0xC0);
} // namespace AI::behavior
using AIbehaviorDriveChaseTargetTreeNodeDefinition = AI::behavior::DriveChaseTargetTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
