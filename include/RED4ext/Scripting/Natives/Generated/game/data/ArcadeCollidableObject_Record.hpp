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
struct ArcadeCollidableObject_Record : game::data::ArcadeObject_Record
{
    static constexpr const char* NAME = "gamedataArcadeCollidableObject_Record";
    static constexpr const char* ALIAS = "ArcadeCollidableObject_Record";

    uint8_t unk88[0x98 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(ArcadeCollidableObject_Record, 0x98);
} // namespace game::data
using gamedataArcadeCollidableObject_Record = game::data::ArcadeCollidableObject_Record;
using ArcadeCollidableObject_Record = game::data::ArcadeCollidableObject_Record;
} // namespace RED4ext

// clang-format on
