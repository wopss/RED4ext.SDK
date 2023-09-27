#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ArcadeObject_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct TankWeapon_Record : game::data::ArcadeObject_Record
{
    static constexpr const char* NAME = "gamedataTankWeapon_Record";
    static constexpr const char* ALIAS = "TankWeapon_Record";

    uint8_t unk88[0xD0 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(TankWeapon_Record, 0xD0);
} // namespace game::data
using gamedataTankWeapon_Record = game::data::TankWeapon_Record;
using TankWeapon_Record = game::data::TankWeapon_Record;
} // namespace RED4ext

// clang-format on
