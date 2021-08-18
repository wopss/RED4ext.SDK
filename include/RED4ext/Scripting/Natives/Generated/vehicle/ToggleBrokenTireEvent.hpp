#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle { 
struct ToggleBrokenTireEvent : red::Event
{
    static constexpr const char* NAME = "vehicleToggleBrokenTireEvent";
    static constexpr const char* ALIAS = "VehicleToggleBrokenTireEvent";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ToggleBrokenTireEvent, 0x48);
} // namespace vehicle
using VehicleToggleBrokenTireEvent = vehicle::ToggleBrokenTireEvent;
} // namespace RED4ext
