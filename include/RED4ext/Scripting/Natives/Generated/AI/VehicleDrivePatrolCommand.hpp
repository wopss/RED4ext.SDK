#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/VehicleCommand.hpp>

namespace RED4ext
{
namespace AI
{
struct VehicleDrivePatrolCommand : AI::VehicleCommand
{
    static constexpr const char* NAME = "AIVehicleDrivePatrolCommand";
    static constexpr const char* ALIAS = NAME;

    float maxSpeed; // 68
    float minSpeed; // 6C
    bool clearTrafficOnPath; // 70
    bool emergencyPatrol; // 71
    uint8_t unk72[0x74 - 0x72]; // 72
    uint32_t numPatrolLoops; // 74
    float forcedStartSpeed; // 78
    uint8_t unk7C[0x80 - 0x7C]; // 7C
};
RED4EXT_ASSERT_SIZE(VehicleDrivePatrolCommand, 0x80);
} // namespace AI
using AIVehicleDrivePatrolCommand = AI::VehicleDrivePatrolCommand;
} // namespace RED4ext

// clang-format on
