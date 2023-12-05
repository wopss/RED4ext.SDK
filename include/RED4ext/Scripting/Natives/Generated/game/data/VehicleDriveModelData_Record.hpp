#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TweakDBRecord.hpp>

namespace RED4ext
{
namespace game::data
{
struct VehicleDriveModelData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataVehicleDriveModelData_Record";
    static constexpr const char* ALIAS = "VehicleDriveModelData_Record";

    uint8_t unk48[0x2C8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(VehicleDriveModelData_Record, 0x2C8);
} // namespace game::data
using gamedataVehicleDriveModelData_Record = game::data::VehicleDriveModelData_Record;
using VehicleDriveModelData_Record = game::data::VehicleDriveModelData_Record;
} // namespace RED4ext

// clang-format on
