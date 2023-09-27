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
struct TankProjectileSpawnerData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataTankProjectileSpawnerData_Record";
    static constexpr const char* ALIAS = "TankProjectileSpawnerData_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TankProjectileSpawnerData_Record, 0x58);
} // namespace game::data
using gamedataTankProjectileSpawnerData_Record = game::data::TankProjectileSpawnerData_Record;
using TankProjectileSpawnerData_Record = game::data::TankProjectileSpawnerData_Record;
} // namespace RED4ext

// clang-format on
