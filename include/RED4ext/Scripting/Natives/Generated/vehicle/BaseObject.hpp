#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/vehicleBaseObject.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(vehicle::BaseObject, 0xBA0);
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

    uint8_t unk240[0x3A0 - 0x240]; // 240
    Ref<AI::Archetype> archetype; // 3A0
    uint8_t unk3B8[0x6D2 - 0x3B8]; // 3B8
    bool isVehicleOnStateLocked; // 6D2
    uint8_t unk6D3[0xBA0 - 0x6D3]; // 6D3
};
RED4EXT_ASSERT_SIZE(BaseObject, 0xBA0);
} // namespace vehicle
using vehicleBaseObject = vehicle::BaseObject;
using VehicleObject = vehicle::BaseObject;
} // namespace RED4ext
*/

// clang-format on
