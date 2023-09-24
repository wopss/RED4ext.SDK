#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ObjectActionCost_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ItemCost_Record : game::data::ObjectActionCost_Record
{
    static constexpr const char* NAME = "gamedataItemCost_Record";
    static constexpr const char* ALIAS = "ItemCost_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(ItemCost_Record, 0x68);
} // namespace game::data
using gamedataItemCost_Record = game::data::ItemCost_Record;
using ItemCost_Record = game::data::ItemCost_Record;
} // namespace RED4ext

// clang-format on
