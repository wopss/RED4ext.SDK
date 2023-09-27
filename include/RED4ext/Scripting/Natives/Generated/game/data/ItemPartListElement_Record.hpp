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
struct ItemPartListElement_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataItemPartListElement_Record";
    static constexpr const char* ALIAS = "ItemPartListElement_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ItemPartListElement_Record, 0x70);
} // namespace game::data
using gamedataItemPartListElement_Record = game::data::ItemPartListElement_Record;
using ItemPartListElement_Record = game::data::ItemPartListElement_Record;
} // namespace RED4ext

// clang-format on
