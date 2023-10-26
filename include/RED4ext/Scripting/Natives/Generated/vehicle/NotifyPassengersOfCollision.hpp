#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace vehicle
{
struct __declspec(align(0x10)) NotifyPassengersOfCollision : red::Event
{
    static constexpr const char* NAME = "vehicleNotifyPassengersOfCollision";
    static constexpr const char* ALIAS = "VehicleNotifyPassengersOfCollision";

    Vector4 hitDirection; // 40
    WeakHandle<game::Object> instigator; // 50
};
RED4EXT_ASSERT_SIZE(NotifyPassengersOfCollision, 0x60);
} // namespace vehicle
using vehicleNotifyPassengersOfCollision = vehicle::NotifyPassengersOfCollision;
using VehicleNotifyPassengersOfCollision = vehicle::NotifyPassengersOfCollision;
} // namespace RED4ext

// clang-format on
