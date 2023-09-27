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
struct ItemBlueprintElement_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataItemBlueprintElement_Record";
    static constexpr const char* ALIAS = "ItemBlueprintElement_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ItemBlueprintElement_Record, 0x70);
} // namespace game::data
using gamedataItemBlueprintElement_Record = game::data::ItemBlueprintElement_Record;
using ItemBlueprintElement_Record = game::data::ItemBlueprintElement_Record;
} // namespace RED4ext

// clang-format on
