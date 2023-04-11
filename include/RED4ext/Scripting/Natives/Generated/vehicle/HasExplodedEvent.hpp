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
struct HasExplodedEvent : red::Event
{
    static constexpr const char* NAME = "vehicleHasExplodedEvent";
    static constexpr const char* ALIAS = "VehicleHasExplodedEvent";

};
RED4EXT_ASSERT_SIZE(HasExplodedEvent, 0x40);
} // namespace vehicle
using vehicleHasExplodedEvent = vehicle::HasExplodedEvent;
using VehicleHasExplodedEvent = vehicle::HasExplodedEvent;
} // namespace RED4ext

// clang-format on
