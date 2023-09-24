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
struct InventoryItemSet_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataInventoryItemSet_Record";
    static constexpr const char* ALIAS = "InventoryItemSet_Record";

    uint8_t unk48[0x58 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(InventoryItemSet_Record, 0x58);
} // namespace game::data
using gamedataInventoryItemSet_Record = game::data::InventoryItemSet_Record;
using InventoryItemSet_Record = game::data::InventoryItemSet_Record;
} // namespace RED4ext

// clang-format on
