#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/VehicleDriveModelData_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct TankDriveModelData_Record : game::data::VehicleDriveModelData_Record
{
    static constexpr const char* NAME = "gamedataTankDriveModelData_Record";
    static constexpr const char* ALIAS = "TankDriveModelData_Record";

    uint8_t unk2C8[0x370 - 0x2C8]; // 2C8
};
RED4EXT_ASSERT_SIZE(TankDriveModelData_Record, 0x370);
} // namespace game::data
using gamedataTankDriveModelData_Record = game::data::TankDriveModelData_Record;
using TankDriveModelData_Record = game::data::TankDriveModelData_Record;
} // namespace RED4ext

// clang-format on
