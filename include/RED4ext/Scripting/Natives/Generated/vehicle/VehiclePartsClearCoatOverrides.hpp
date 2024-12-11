#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/VehicleClearCoatOverrides.hpp>

namespace RED4ext
{
namespace vehicle
{
struct VehiclePartsClearCoatOverrides
{
    static constexpr const char* NAME = "vehicleVehiclePartsClearCoatOverrides";
    static constexpr const char* ALIAS = "VehiclePartsClearCoatOverrides";

    DynArray<CName> partsName; // 00
    vehicle::VehicleClearCoatOverrides overrides; // 10
};
RED4EXT_ASSERT_SIZE(VehiclePartsClearCoatOverrides, 0x28);
} // namespace vehicle
using vehicleVehiclePartsClearCoatOverrides = vehicle::VehiclePartsClearCoatOverrides;
using VehiclePartsClearCoatOverrides = vehicle::VehiclePartsClearCoatOverrides;
} // namespace RED4ext

// clang-format on
