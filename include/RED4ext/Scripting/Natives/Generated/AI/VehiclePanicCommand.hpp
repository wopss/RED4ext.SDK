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
struct VehiclePanicCommand : AI::VehicleCommand
{
    static constexpr const char* NAME = "AIVehiclePanicCommand";
    static constexpr const char* ALIAS = NAME;

    bool allowSimplifiedMovement; // 68
    bool ignoreTickets; // 69
    bool disableStuckDetection; // 6A
    bool useSpeedBasedLookupRange; // 6B
    bool tryDriveAwayFromPlayer; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
};
RED4EXT_ASSERT_SIZE(VehiclePanicCommand, 0x70);
} // namespace AI
using AIVehiclePanicCommand = AI::VehiclePanicCommand;
} // namespace RED4ext

// clang-format on
