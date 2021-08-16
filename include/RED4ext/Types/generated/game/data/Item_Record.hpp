#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/data/BaseObject_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct Item_Record : game::data::BaseObject_Record
{
    static constexpr const char* NAME = "gamedataItem_Record";
    static constexpr const char* ALIAS = "Item_Record";

    uint8_t unk60[0x130 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(Item_Record, 0x130);
} // namespace game::data
using Item_Record = game::data::Item_Record;
} // namespace RED4ext
