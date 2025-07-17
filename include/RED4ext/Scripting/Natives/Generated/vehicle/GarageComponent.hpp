#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace vehicle
{
struct GarageComponent : game::Component
{
    static constexpr const char* NAME = "vehicleGarageComponent";
    static constexpr const char* ALIAS = "GarageComponent";

    uint8_t unkA8[0x3D0 - 0xA8]; // A8
};
RED4EXT_ASSERT_SIZE(GarageComponent, 0x3D0);
} // namespace vehicle
using vehicleGarageComponent = vehicle::GarageComponent;
using GarageComponent = vehicle::GarageComponent;
} // namespace RED4ext

// clang-format on
