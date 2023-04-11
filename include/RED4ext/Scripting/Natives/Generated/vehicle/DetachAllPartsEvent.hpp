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
struct DetachAllPartsEvent : red::Event
{
    static constexpr const char* NAME = "vehicleDetachAllPartsEvent";
    static constexpr const char* ALIAS = "VehicleDetachAllPartsEvent";

};
RED4EXT_ASSERT_SIZE(DetachAllPartsEvent, 0x40);
} // namespace vehicle
using vehicleDetachAllPartsEvent = vehicle::DetachAllPartsEvent;
using VehicleDetachAllPartsEvent = vehicle::DetachAllPartsEvent;
} // namespace RED4ext

// clang-format on
