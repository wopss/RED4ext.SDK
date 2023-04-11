#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace vehicle
{
struct GarageComponentVehicleData
{
    static constexpr const char* NAME = "vehicleGarageComponentVehicleData";
    static constexpr const char* ALIAS = NAME;

    TweakDBID spawnRecordID; // 00
    ent::EntityID entityID; // 08
    NodeRef vehicleNameNodeRef; // 10
    bool despawnOnDistanceEnabled; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(GarageComponentVehicleData, 0x20);
} // namespace vehicle
using vehicleGarageComponentVehicleData = vehicle::GarageComponentVehicleData;
} // namespace RED4ext

// clang-format on
