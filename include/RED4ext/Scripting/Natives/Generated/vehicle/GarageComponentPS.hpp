#pragma once

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
namespace vehicle { 
struct GarageComponentPS : game::ComponentPS
{
    static constexpr const char* NAME = "vehicleGarageComponentPS";
    static constexpr const char* ALIAS = "GarageComponentPS";

    DynArray<vehicle::GarageComponentVehicleData> spawnedVehiclesData; // 68
    DynArray<vehicle::GarageVehicleID> unlockedVehicles; // 78
    DynArray<vehicle::UnlockedVehicle> unlockedVehicleArray; // 88
    alignas(8) StaticArray<vehicle::GarageVehicleID, 3> activeVehicles; // 98
    vehicle::GarageComponentVehicleData mountedVehicleData; // D0
    bool mountedVehicleStolen; // F0
    uint8_t unkF1[0xF8 - 0xF1]; // F1
};
RED4EXT_ASSERT_SIZE(GarageComponentPS, 0xF8);
} // namespace vehicle
using GarageComponentPS = vehicle::GarageComponentPS;
} // namespace RED4ext
