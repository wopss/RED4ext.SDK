#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct ParkedEvent : red::Event
{
    static constexpr const char* NAME = "vehicleParkedEvent";
    static constexpr const char* ALIAS = "VehicleParkedEvent";

    bool park; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(ParkedEvent, 0x48);
} // namespace vehicle
using vehicleParkedEvent = vehicle::ParkedEvent;
using VehicleParkedEvent = vehicle::ParkedEvent;
} // namespace RED4ext

// clang-format on
