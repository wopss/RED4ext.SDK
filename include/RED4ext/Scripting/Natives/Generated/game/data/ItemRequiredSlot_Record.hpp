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
struct ItemRequiredSlot_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataItemRequiredSlot_Record";
    static constexpr const char* ALIAS = "ItemRequiredSlot_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ItemRequiredSlot_Record, 0x60);
} // namespace game::data
using gamedataItemRequiredSlot_Record = game::data::ItemRequiredSlot_Record;
using ItemRequiredSlot_Record = game::data::ItemRequiredSlot_Record;
} // namespace RED4ext

// clang-format on
