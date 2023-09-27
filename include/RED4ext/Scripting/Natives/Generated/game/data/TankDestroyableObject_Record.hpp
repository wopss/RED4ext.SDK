#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ArcadeCollidableObject_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct TankDestroyableObject_Record : game::data::ArcadeCollidableObject_Record
{
    static constexpr const char* NAME = "gamedataTankDestroyableObject_Record";
    static constexpr const char* ALIAS = "TankDestroyableObject_Record";

    uint8_t unk98[0xD8 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(TankDestroyableObject_Record, 0xD8);
} // namespace game::data
using gamedataTankDestroyableObject_Record = game::data::TankDestroyableObject_Record;
using TankDestroyableObject_Record = game::data::TankDestroyableObject_Record;
} // namespace RED4ext

// clang-format on
