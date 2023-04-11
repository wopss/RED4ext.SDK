#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/GarageVehicleID.hpp>

namespace RED4ext
{
namespace vehicle
{
struct UnlockedVehicle
{
    static constexpr const char* NAME = "vehicleUnlockedVehicle";
    static constexpr const char* ALIAS = NAME;

    vehicle::GarageVehicleID vehicleID; // 00
    float health; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(UnlockedVehicle, 0x18);
} // namespace vehicle
using vehicleUnlockedVehicle = vehicle::UnlockedVehicle;
} // namespace RED4ext

// clang-format on
