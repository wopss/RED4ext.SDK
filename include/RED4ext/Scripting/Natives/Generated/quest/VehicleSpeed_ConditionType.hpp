#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/EVehicleSpeedConditionType.hpp>

namespace RED4ext
{
namespace quest { 
struct VehicleSpeed_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleSpeed_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference vehicleRef; // 38
    vehicle::EVehicleSpeedConditionType comparisonType; // 70
    float speed; // 74
};
RED4EXT_ASSERT_SIZE(VehicleSpeed_ConditionType, 0x78);
} // namespace quest
} // namespace RED4ext
