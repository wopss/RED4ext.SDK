#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleConditionType.hpp>

namespace RED4ext
{
namespace quest
{
struct VehicleAirtime_ConditionType : quest::IVehicleConditionType
{
    static constexpr const char* NAME = "questVehicleAirtime_ConditionType";
    static constexpr const char* ALIAS = NAME;

    float seconds; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(VehicleAirtime_ConditionType, 0x40);
} // namespace quest
using questVehicleAirtime_ConditionType = quest::VehicleAirtime_ConditionType;
} // namespace RED4ext

// clang-format on
