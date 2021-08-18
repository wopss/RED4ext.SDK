#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle { 
struct TeleportEvent : red::Event
{
    static constexpr const char* NAME = "vehicleTeleportEvent";
    static constexpr const char* ALIAS = "VehicleTeleportEvent";

    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(TeleportEvent, 0x70);
} // namespace vehicle
using VehicleTeleportEvent = vehicle::TeleportEvent;
} // namespace RED4ext
