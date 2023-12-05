#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/BaseObject_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct Item_Record : game::data::BaseObject_Record
{
    static constexpr const char* NAME = "gamedataItem_Record";
    static constexpr const char* ALIAS = "Item_Record";

    uint8_t unkA0[0x478 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(Item_Record, 0x478);
} // namespace game::data
using gamedataItem_Record = game::data::Item_Record;
using Item_Record = game::data::Item_Record;
} // namespace RED4ext

// clang-format on
