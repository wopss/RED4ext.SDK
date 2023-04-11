#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mounting/MountableComponent.hpp>

namespace RED4ext
{
namespace vehicle
{
struct VehicleMountableComponent : game::mounting::MountableComponent
{
    static constexpr const char* NAME = "vehicleVehicleMountableComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk98[0xA8 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(VehicleMountableComponent, 0xA8);
} // namespace vehicle
using vehicleVehicleMountableComponent = vehicle::VehicleMountableComponent;
} // namespace RED4ext

// clang-format on
