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
struct ItemList_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataItemList_Record";
    static constexpr const char* ALIAS = "ItemList_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ItemList_Record, 0x58);
} // namespace game::data
using gamedataItemList_Record = game::data::ItemList_Record;
using ItemList_Record = game::data::ItemList_Record;
} // namespace RED4ext

// clang-format on
