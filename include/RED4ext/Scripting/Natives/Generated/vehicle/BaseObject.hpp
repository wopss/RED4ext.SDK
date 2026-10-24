#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/vehicleBaseObject.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(vehicle::BaseObject, 0xBC0);
using vehicleBaseObject = vehicle::BaseObject;
using VehicleObject = vehicle::BaseObject;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace AI { struct Archetype; }

namespace vehicle
{
struct __declspec(align(0x10)) BaseObject : game::Object
{
    static constexpr const char* NAME = "vehicleBaseObject";
    static constexpr const char* ALIAS = "VehicleObject";

    uint8_t unk240[0x3B0 - 0x240]; // 240
    Ref<AI::Archetype> archetype; // 3B0
    uint8_t unk3C8[0x6F2 - 0x3C8]; // 3C8
    bool isVehicleOnStateLocked; // 6F2
    uint8_t unk6F3[0xBC0 - 0x6F3]; // 6F3
};
RED4EXT_ASSERT_SIZE(BaseObject, 0xBC0);
} // namespace vehicle
using vehicleBaseObject = vehicle::BaseObject;
using VehicleObject = vehicle::BaseObject;
} // namespace RED4ext
*/

// clang-format on
