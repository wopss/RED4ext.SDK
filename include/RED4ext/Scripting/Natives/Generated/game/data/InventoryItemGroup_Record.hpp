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
struct InventoryItemGroup_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataInventoryItemGroup_Record";
    static constexpr const char* ALIAS = "InventoryItemGroup_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(InventoryItemGroup_Record, 0x58);
} // namespace game::data
using gamedataInventoryItemGroup_Record = game::data::InventoryItemGroup_Record;
using InventoryItemGroup_Record = game::data::InventoryItemGroup_Record;
} // namespace RED4ext

// clang-format on
