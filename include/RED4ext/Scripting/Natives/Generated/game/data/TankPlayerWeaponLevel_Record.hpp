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
struct TankPlayerWeaponLevel_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataTankPlayerWeaponLevel_Record";
    static constexpr const char* ALIAS = "TankPlayerWeaponLevel_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TankPlayerWeaponLevel_Record, 0x58);
} // namespace game::data
using gamedataTankPlayerWeaponLevel_Record = game::data::TankPlayerWeaponLevel_Record;
using TankPlayerWeaponLevel_Record = game::data::TankPlayerWeaponLevel_Record;
} // namespace RED4ext

// clang-format on
