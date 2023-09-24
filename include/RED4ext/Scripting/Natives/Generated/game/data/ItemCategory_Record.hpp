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
struct ItemCategory_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataItemCategory_Record";
    static constexpr const char* ALIAS = "ItemCategory_Record";

    uint8_t unk48[0x68 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ItemCategory_Record, 0x68);
} // namespace game::data
using gamedataItemCategory_Record = game::data::ItemCategory_Record;
using ItemCategory_Record = game::data::ItemCategory_Record;
} // namespace RED4ext

// clang-format on
