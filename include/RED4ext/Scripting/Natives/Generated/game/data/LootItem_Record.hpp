#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/LootTableElement_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct LootItem_Record : game::data::LootTableElement_Record
{
    static constexpr const char* NAME = "gamedataLootItem_Record";
    static constexpr const char* ALIAS = "LootItem_Record";

    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(LootItem_Record, 0x60);
} // namespace game::data
using LootItem_Record = game::data::LootItem_Record;
} // namespace RED4ext
