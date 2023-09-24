#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/VehicleSpecificCommandParams.hpp>

namespace RED4ext
{
namespace quest::vehicle
{
struct PanicParams : quest::VehicleSpecificCommandParams
{
    static constexpr const char* NAME = "questvehiclePanicParams";
    static constexpr const char* ALIAS = NAME;

    bool allowSimplifiedMovement; // 38
    bool ignoreTickets; // 39
    bool disableStuckDetection; // 3A
    bool useSpeedBasedLookupRange; // 3B
    bool tryDriveAwayFromPlayer; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
};
RED4EXT_ASSERT_SIZE(PanicParams, 0x40);
} // namespace quest::vehicle
using questvehiclePanicParams = quest::vehicle::PanicParams;
} // namespace RED4ext

// clang-format on
