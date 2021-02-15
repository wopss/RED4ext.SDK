#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/quest/IVehicleConditionType.hpp>
#include <RED4ext/Types/generated/vehicle/EVehicleDoor.hpp>
#include <RED4ext/Types/generated/vehicle/VehicleDoorState.hpp>

namespace RED4ext
{
namespace quest { 
struct VehicleDoor_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleDoor_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 38
    vehicle::EVehicleDoor door; // 70
    vehicle::VehicleDoorState state; // 74
};
RED4EXT_ASSERT_SIZE(VehicleDoor_ConditionType, 0x78);
} // namespace quest
} // namespace RED4ext
