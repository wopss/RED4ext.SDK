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
struct QuestNodeSetVehicleRemoteControlled : red::Event
{
    static constexpr const char* NAME = "vehicleQuestNodeSetVehicleRemoteControlled";
    static constexpr const char* ALIAS = "VehicleQuestNodeSetVehicleRemoteControlled";

    bool enable; // 40
    bool shouldUnseatPassengers; // 41
    bool shouldModifyInteractionState; // 42
    uint8_t unk43[0x48 - 0x43]; // 43
};
RED4EXT_ASSERT_SIZE(QuestNodeSetVehicleRemoteControlled, 0x48);
} // namespace vehicle
using vehicleQuestNodeSetVehicleRemoteControlled = vehicle::QuestNodeSetVehicleRemoteControlled;
using VehicleQuestNodeSetVehicleRemoteControlled = vehicle::QuestNodeSetVehicleRemoteControlled;
} // namespace RED4ext

// clang-format on
