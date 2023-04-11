#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace vehicle
{
struct GarageVehicleID
{
    static constexpr const char* NAME = "vehicleGarageVehicleID";
    static constexpr const char* ALIAS = "GarageVehicleID";

    TweakDBID recordID; // 00
    CName name; // 08
};
RED4EXT_ASSERT_SIZE(GarageVehicleID, 0x10);
} // namespace vehicle
using vehicleGarageVehicleID = vehicle::GarageVehicleID;
using GarageVehicleID = vehicle::GarageVehicleID;
} // namespace RED4ext

// clang-format on
