#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/ComponentPS.hpp>
#include <RED4ext/Types/generated/vehicle/GarageComponentVehicleData.hpp>
#include <RED4ext/Types/generated/vehicle/GarageVehicleID.hpp>
#include <RED4ext/Types/generated/vehicle/UnlockedVehicle.hpp>

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
    bool mountedVehicleStolen; // E8
    uint8_t unkE9[0xF0 - 0xE9]; // E9
};
RED4EXT_ASSERT_SIZE(GarageComponentPS, 0xF0);
} // namespace vehicle
using GarageComponentPS = vehicle::GarageComponentPS;
} // namespace RED4ext
