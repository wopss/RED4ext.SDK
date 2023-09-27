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
struct TankPickupSpawnerData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataTankPickupSpawnerData_Record";
    static constexpr const char* ALIAS = "TankPickupSpawnerData_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TankPickupSpawnerData_Record, 0x58);
} // namespace game::data
using gamedataTankPickupSpawnerData_Record = game::data::TankPickupSpawnerData_Record;
using TankPickupSpawnerData_Record = game::data::TankPickupSpawnerData_Record;
} // namespace RED4ext

// clang-format on
