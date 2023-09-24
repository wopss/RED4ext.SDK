#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace vehicle
{
struct StartedMountingEvent : red::Event
{
    static constexpr const char* NAME = "vehicleStartedMountingEvent";
    static constexpr const char* ALIAS = "VehicleStartedMountingEvent";

    CName slotID; // 40
    CName animationSlotName; // 48
    bool isMounting; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    WeakHandle<game::Object> character; // 58
    bool instant; // 68
    bool silent; // 69
    uint8_t unk6A[0x70 - 0x6A]; // 6A
};
RED4EXT_ASSERT_SIZE(StartedMountingEvent, 0x70);
} // namespace vehicle
using vehicleStartedMountingEvent = vehicle::StartedMountingEvent;
using VehicleStartedMountingEvent = vehicle::StartedMountingEvent;
} // namespace RED4ext

// clang-format on
