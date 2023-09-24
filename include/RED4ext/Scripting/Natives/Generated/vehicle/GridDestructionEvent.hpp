#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace vehicle
{
struct GridDestructionEvent : red::Event
{
    static constexpr const char* NAME = "vehicleGridDestructionEvent";
    static constexpr const char* ALIAS = "VehicleGridDestructionEvent";

    NativeArray<float, 16> state; // 40
    NativeArray<float, 16> rawChange; // 80
    NativeArray<float, 16> desiredChange; // C0
    float damageMultiplier; // 100
    Vector3 impactPoint; // 104
    WeakHandle<game::Object> otherVehicle; // 110
    bool rammedOtherVehicle; // 120
    bool otherVehicleRammed; // 121
    uint8_t unk122[0x128 - 0x122]; // 122
};
RED4EXT_ASSERT_SIZE(GridDestructionEvent, 0x128);
} // namespace vehicle
using vehicleGridDestructionEvent = vehicle::GridDestructionEvent;
using VehicleGridDestructionEvent = vehicle::GridDestructionEvent;
} // namespace RED4ext

// clang-format on
