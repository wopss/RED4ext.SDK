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
struct RemoteControlCameraToggleEvent : red::Event
{
    static constexpr const char* NAME = "vehicleRemoteControlCameraToggleEvent";
    static constexpr const char* ALIAS = "VehicleRemoteControlCameraToggleEvent";

};
RED4EXT_ASSERT_SIZE(RemoteControlCameraToggleEvent, 0x40);
} // namespace vehicle
using vehicleRemoteControlCameraToggleEvent = vehicle::RemoteControlCameraToggleEvent;
using VehicleRemoteControlCameraToggleEvent = vehicle::RemoteControlCameraToggleEvent;
} // namespace RED4ext

// clang-format on
