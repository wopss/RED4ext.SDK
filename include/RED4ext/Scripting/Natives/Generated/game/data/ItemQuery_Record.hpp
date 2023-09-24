#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Query_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ItemQuery_Record : game::data::Query_Record
{
    static constexpr const char* NAME = "gamedataItemQuery_Record";
    static constexpr const char* ALIAS = "ItemQuery_Record";

    uint8_t unk58[0x98 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(ItemQuery_Record, 0x98);
} // namespace game::data
using gamedataItemQuery_Record = game::data::ItemQuery_Record;
using ItemQuery_Record = game::data::ItemQuery_Record;
} // namespace RED4ext

// clang-format on
