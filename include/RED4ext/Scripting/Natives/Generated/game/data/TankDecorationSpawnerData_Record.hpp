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
struct TankDecorationSpawnerData_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataTankDecorationSpawnerData_Record";
    static constexpr const char* ALIAS = "TankDecorationSpawnerData_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TankDecorationSpawnerData_Record, 0x60);
} // namespace game::data
using gamedataTankDecorationSpawnerData_Record = game::data::TankDecorationSpawnerData_Record;
using TankDecorationSpawnerData_Record = game::data::TankDecorationSpawnerData_Record;
} // namespace RED4ext

// clang-format on
