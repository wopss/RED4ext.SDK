#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TankDestroyableObject_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct TankEnemy_Record : game::data::TankDestroyableObject_Record
{
    static constexpr const char* NAME = "gamedataTankEnemy_Record";
    static constexpr const char* ALIAS = "TankEnemy_Record";

    uint8_t unkD8[0x138 - 0xD8]; // D8
};
RED4EXT_ASSERT_SIZE(TankEnemy_Record, 0x138);
} // namespace game::data
using gamedataTankEnemy_Record = game::data::TankEnemy_Record;
using TankEnemy_Record = game::data::TankEnemy_Record;
} // namespace RED4ext

// clang-format on
