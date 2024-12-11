#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace vehicle
{
struct VehicleAppearanceToDecalsName
{
    static constexpr const char* NAME = "vehicleVehicleAppearanceToDecalsName";
    static constexpr const char* ALIAS = NAME;

    CName appearanceName; // 00
    DynArray<CName> decalsName; // 08
};
RED4EXT_ASSERT_SIZE(VehicleAppearanceToDecalsName, 0x18);
} // namespace vehicle
using vehicleVehicleAppearanceToDecalsName = vehicle::VehicleAppearanceToDecalsName;
} // namespace RED4ext

// clang-format on
