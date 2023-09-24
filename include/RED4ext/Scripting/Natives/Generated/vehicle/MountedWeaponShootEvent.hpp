#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct MountedWeaponShootEvent : red::Event
{
    static constexpr const char* NAME = "vehicleMountedWeaponShootEvent";
    static constexpr const char* ALIAS = "VehicleMountedWeaponShootEvent";

    TweakDBID weaponID; // 40
    TweakDBID slotID; // 48
};
RED4EXT_ASSERT_SIZE(MountedWeaponShootEvent, 0x50);
} // namespace vehicle
using vehicleMountedWeaponShootEvent = vehicle::MountedWeaponShootEvent;
using VehicleMountedWeaponShootEvent = vehicle::MountedWeaponShootEvent;
} // namespace RED4ext

// clang-format on
