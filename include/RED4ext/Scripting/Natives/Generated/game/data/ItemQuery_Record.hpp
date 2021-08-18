#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Query_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ItemQuery_Record : game::data::Query_Record
{
    static constexpr const char* NAME = "gamedataItemQuery_Record";
    static constexpr const char* ALIAS = "ItemQuery_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(ItemQuery_Record, 0x58);
} // namespace game::data
using ItemQuery_Record = game::data::ItemQuery_Record;
} // namespace RED4ext
