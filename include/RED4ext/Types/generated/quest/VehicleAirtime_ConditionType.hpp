#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/quest/IVehicleConditionType.hpp>

namespace RED4ext
{
namespace quest { 
struct VehicleAirtime_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleAirtime_ConditionType";
    static constexpr const char* ALIAS = NAME;

    float seconds; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(VehicleAirtime_ConditionType, 0x40);
} // namespace quest
} // namespace RED4ext
