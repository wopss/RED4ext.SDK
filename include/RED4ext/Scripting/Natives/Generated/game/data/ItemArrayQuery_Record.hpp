#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ItemQuery_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ItemArrayQuery_Record : game::data::ItemQuery_Record
{
    static constexpr const char* NAME = "gamedataItemArrayQuery_Record";
    static constexpr const char* ALIAS = "ItemArrayQuery_Record";

    uint8_t unk98[0xB0 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(ItemArrayQuery_Record, 0xB0);
} // namespace game::data
using gamedataItemArrayQuery_Record = game::data::ItemArrayQuery_Record;
using ItemArrayQuery_Record = game::data::ItemArrayQuery_Record;
} // namespace RED4ext

// clang-format on
