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
struct DriveToPointTreeNodeDefinition : AI::behavior::DriveTreeNodeDefinition
{
    static constexpr const char* NAME = "AIbehaviorDriveToPointTreeNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<AI::ArgumentMapping> targetPosition; // 40
    Handle<AI::ArgumentMapping> secureTimeOut; // 50
    uint8_t unk60[0x70 - 0x60]; // 60
    Handle<AI::ArgumentMapping> useTraffic; // 70
    Handle<AI::ArgumentMapping> speedInTraffic; // 80
    Handle<AI::ArgumentMapping> forceGreenLights; // 90
    Handle<AI::ArgumentMapping> portals; // A0
    Handle<AI::ArgumentMapping> trafficTryNeighborsForStart; // B0
    Handle<AI::ArgumentMapping> trafficTryNeighborsForEnd; // C0
};
RED4EXT_ASSERT_SIZE(DriveToPointTreeNodeDefinition, 0xD0);
} // namespace AI::behavior
using AIbehaviorDriveToPointTreeNodeDefinition = AI::behavior::DriveToPointTreeNodeDefinition;
} // namespace RED4ext

// clang-format on
