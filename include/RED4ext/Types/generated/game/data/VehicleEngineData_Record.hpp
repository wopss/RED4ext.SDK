#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct VehicleEngineData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleEngineData_Record";
    static constexpr const char* ALIAS = "VehicleEngineData_Record";

    uint8_t unk48[0x78 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleEngineData_Record, 0x78);
} // namespace game::data
using VehicleEngineData_Record = game::data::VehicleEngineData_Record;
} // namespace RED4ext
