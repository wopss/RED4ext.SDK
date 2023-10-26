#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace physics { struct SystemResource; }

namespace vehicle
{
struct __declspec(align(0x10)) ChassisComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "vehicleChassisComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x128 - 0x120]; // 120
    Ref<physics::SystemResource> collisionResource; // 128
    Ref<physics::SystemResource> optionalPlayerOnlyCollisionResource; // 140
    uint8_t unk158[0x190 - 0x158]; // 158
};
RED4EXT_ASSERT_SIZE(ChassisComponent, 0x190);
} // namespace vehicle
using vehicleChassisComponent = vehicle::ChassisComponent;
} // namespace RED4ext

// clang-format on
