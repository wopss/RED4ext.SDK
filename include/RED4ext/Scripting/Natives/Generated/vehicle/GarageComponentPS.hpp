#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComponentPS.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/GarageComponentVehicleData.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/GarageVehicleID.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/UnlockedVehicle.hpp>

namespace RED4ext
{
namespace vehicle
{
struct GarageComponentPS : game::ComponentPS
{
    static constexpr const char* NAME = "vehicleGarageComponentPS";
    static constexpr const char* ALIAS = "GarageComponentPS";

    DynArray<vehicle::GarageComponentVehicleData> spawnedVehiclesData; // 68
    DynArray<vehicle::GarageVehicleID> unlockedVehicles; // 78
    DynArray<vehicle::UnlockedVehicle> unlockedVehicleArray; // 88
    DynArray<vehicle::GarageVehicleID> uiFavoritedVehicles; // 98
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<vehicle::GarageVehicleID, 3> activeVehicles; // A8
    vehicle::GarageComponentVehicleData mountedVehicleData; // E0
    bool mountedVehicleStolen; // 100
    uint8_t unk101[0x108 - 0x101]; // 101
};
RED4EXT_ASSERT_SIZE(GarageComponentPS, 0x108);
} // namespace vehicle
using vehicleGarageComponentPS = vehicle::GarageComponentPS;
using GarageComponentPS = vehicle::GarageComponentPS;
} // namespace RED4ext

// clang-format on
