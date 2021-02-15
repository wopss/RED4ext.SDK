#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace vehicle { 
struct GarageComponentVehicleData
{
    static constexpr const char* NAME = "vehicleGarageComponentVehicleData";
    static constexpr const char* ALIAS = NAME;

    TweakDBID spawnRecordID; // 00
    ent::EntityID entityID; // 08
    NodeRef vehicleNameNodeRef; // 10
};
RED4EXT_ASSERT_SIZE(GarageComponentVehicleData, 0x18);
} // namespace vehicle
} // namespace RED4ext
