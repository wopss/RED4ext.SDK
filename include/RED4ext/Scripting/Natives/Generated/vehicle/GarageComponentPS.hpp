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
    DynArray<vehicle::GarageComponentVehicleData> unregisteredVehiclesData; // 78
    DynArray<vehicle::GarageVehicleID> unlockedVehicles; // 88
    DynArray<vehicle::UnlockedVehicle> unlockedVehicleArray; // 98
    DynArray<vehicle::GarageVehicleID> uiFavoritedVehicles; // A8
#pragma warning(suppress : 4324)
    alignas(8) StaticArray<vehicle::GarageVehicleID, 3> activeVehicles; // B8
    vehicle::GarageComponentVehicleData mountedVehicleData; // F0
    bool mountedVehicleStolen; // 110
    uint8_t unk111[0x118 - 0x111]; // 111
};
RED4EXT_ASSERT_SIZE(GarageComponentPS, 0x118);
} // namespace vehicle
using vehicleGarageComponentPS = vehicle::GarageComponentPS;
using GarageComponentPS = vehicle::GarageComponentPS;
} // namespace RED4ext

// clang-format on
