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
struct ExplodeEvent : red::Event
{
    static constexpr const char* NAME = "vehicleExplodeEvent";
    static constexpr const char* ALIAS = "VehicleExplodeEvent";

};
RED4EXT_ASSERT_SIZE(ExplodeEvent, 0x40);
} // namespace vehicle
using vehicleExplodeEvent = vehicle::ExplodeEvent;
using VehicleExplodeEvent = vehicle::ExplodeEvent;
} // namespace RED4ext

// clang-format on
