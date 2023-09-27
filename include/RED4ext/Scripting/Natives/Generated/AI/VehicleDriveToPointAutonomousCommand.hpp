#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/VehicleCommand.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace AI
{
struct VehicleDriveToPointAutonomousCommand : AI::VehicleCommand
{
    static constexpr const char* NAME = "AIVehicleDriveToPointAutonomousCommand";
    static constexpr const char* ALIAS = NAME;

    Vector3 targetPosition; // 68
    float maxSpeed; // 74
    float minSpeed; // 78
    bool clearTrafficOnPath; // 7C
    uint8_t unk7D[0x80 - 0x7D]; // 7D
    float minimumDistanceToTarget; // 80
    float forcedStartSpeed; // 84
    bool driveDownTheRoadIndefinitely; // 88
    uint8_t unk89[0x90 - 0x89]; // 89
};
RED4EXT_ASSERT_SIZE(VehicleDriveToPointAutonomousCommand, 0x90);
} // namespace AI
using AIVehicleDriveToPointAutonomousCommand = AI::VehicleDriveToPointAutonomousCommand;
} // namespace RED4ext

// clang-format on
