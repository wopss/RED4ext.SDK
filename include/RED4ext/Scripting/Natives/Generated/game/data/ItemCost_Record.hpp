#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ObjectActionCost_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ItemCost_Record : game::data::ObjectActionCost_Record
{
    static constexpr const char* NAME = "gamedataItemCost_Record";
    static constexpr const char* ALIAS = "ItemCost_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(ItemCost_Record, 0x58);
} // namespace game::data
using ItemCost_Record = game::data::ItemCost_Record;
} // namespace RED4ext
