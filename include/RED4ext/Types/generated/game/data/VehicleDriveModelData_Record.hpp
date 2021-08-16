#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data { 
struct VehicleDriveModelData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleDriveModelData_Record";
    static constexpr const char* ALIAS = "VehicleDriveModelData_Record";

    uint8_t unk48[0x118 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleDriveModelData_Record, 0x118);
} // namespace game::data
using VehicleDriveModelData_Record = game::data::VehicleDriveModelData_Record;
} // namespace RED4ext
