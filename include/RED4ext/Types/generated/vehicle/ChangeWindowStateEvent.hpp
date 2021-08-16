#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>
#include <RED4ext/Types/generated/vehicle/EQuestVehicleWindowState.hpp>
#include <RED4ext/Types/generated/vehicle/EVehicleDoor.hpp>

namespace RED4ext
{
namespace vehicle { 
struct ChangeWindowStateEvent : red::Event
{
    static constexpr const char* NAME = "vehicleChangeWindowStateEvent";
    static constexpr const char* ALIAS = NAME;

    vehicle::EQuestVehicleWindowState state; // 40
    vehicle::EVehicleDoor door; // 44
};
RED4EXT_ASSERT_SIZE(ChangeWindowStateEvent, 0x48);
} // namespace vehicle
} // namespace RED4ext
