#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace vehicle
{
struct VehicleContactEvent : red::Event
{
    static constexpr const char* NAME = "vehicleVehicleContactEvent";
    static constexpr const char* ALIAS = "VehicleContactEvent";

    uint8_t unk40[0xF8 - 0x40]; // 40
    WeakHandle<game::Object> otherVehicle; // F8
};
RED4EXT_ASSERT_SIZE(VehicleContactEvent, 0x108);
} // namespace vehicle
using vehicleVehicleContactEvent = vehicle::VehicleContactEvent;
using VehicleContactEvent = vehicle::VehicleContactEvent;
} // namespace RED4ext

// clang-format on
