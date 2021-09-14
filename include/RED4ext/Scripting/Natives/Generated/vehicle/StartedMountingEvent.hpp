#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace vehicle { 
struct StartedMountingEvent : red::Event
{
    static constexpr const char* NAME = "vehicleStartedMountingEvent";
    static constexpr const char* ALIAS = "VehicleStartedMountingEvent";

    CName slotID; // 40
    bool isMounting; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    WeakHandle<game::Object> character; // 50
    bool instant; // 60
    bool silent; // 61
    uint8_t unk62[0x68 - 0x62]; // 62
};
RED4EXT_ASSERT_SIZE(StartedMountingEvent, 0x68);
} // namespace vehicle
using VehicleStartedMountingEvent = vehicle::StartedMountingEvent;
} // namespace RED4ext
