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
struct FinishedMountingEvent : red::Event
{
    static constexpr const char* NAME = "vehicleFinishedMountingEvent";
    static constexpr const char* ALIAS = "VehicleFinishedMountingEvent";

    CName slotID; // 40
    bool isMounting; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    WeakHandle<game::Object> character; // 50
};
RED4EXT_ASSERT_SIZE(FinishedMountingEvent, 0x60);
} // namespace vehicle
using vehicleFinishedMountingEvent = vehicle::FinishedMountingEvent;
using VehicleFinishedMountingEvent = vehicle::FinishedMountingEvent;
} // namespace RED4ext

// clang-format on
