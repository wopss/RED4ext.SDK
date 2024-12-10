#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>

namespace RED4ext
{
namespace vehicle
{
struct VehicleClearCoatOverrides
{
    static constexpr const char* NAME = "vehicleVehicleClearCoatOverrides";
    static constexpr const char* ALIAS = "VehicleClearCoatOverrides";

    float opacity; // 00
    Color coatTintFwd; // 04
    Color coatTintSide; // 08
    float coatTintFresnelBias; // 0C
    Color coatSpecularColor; // 10
    float coatFresnelBias; // 14
};
RED4EXT_ASSERT_SIZE(VehicleClearCoatOverrides, 0x18);
} // namespace vehicle
using vehicleVehicleClearCoatOverrides = vehicle::VehicleClearCoatOverrides;
using VehicleClearCoatOverrides = vehicle::VehicleClearCoatOverrides;
} // namespace RED4ext

// clang-format on
