#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace vehicle { struct BaseObject; }

namespace vehicle
{
struct RemoteControlDrivingUIData
{
    static constexpr const char* NAME = "vehicleRemoteControlDrivingUIData";
    static constexpr const char* ALIAS = "RemoteControlDrivingUIData";

    WeakHandle<vehicle::BaseObject> remoteControlledVehicle; // 00
    bool isDistanceDisconnect; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
};
RED4EXT_ASSERT_SIZE(RemoteControlDrivingUIData, 0x18);
} // namespace vehicle
using vehicleRemoteControlDrivingUIData = vehicle::RemoteControlDrivingUIData;
using RemoteControlDrivingUIData = vehicle::RemoteControlDrivingUIData;
} // namespace RED4ext

// clang-format on
