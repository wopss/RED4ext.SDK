#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct DetachPartEvent : red::Event
{
    static constexpr const char* NAME = "vehicleDetachPartEvent";
    static constexpr const char* ALIAS = "VehicleDetachPartEvent";

    CName partName; // 40
};
RED4EXT_ASSERT_SIZE(DetachPartEvent, 0x48);
} // namespace vehicle
using vehicleDetachPartEvent = vehicle::DetachPartEvent;
using VehicleDetachPartEvent = vehicle::DetachPartEvent;
} // namespace RED4ext

// clang-format on
