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
struct ItemPartConnection_Record : game::data::TweakDBRecord
{
    static constexpr const char* NAME = "gamedataItemPartConnection_Record";
    static constexpr const char* ALIAS = "ItemPartConnection_Record";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ItemPartConnection_Record, 0x70);
} // namespace game::data
using gamedataItemPartConnection_Record = game::data::ItemPartConnection_Record;
using ItemPartConnection_Record = game::data::ItemPartConnection_Record;
} // namespace RED4ext

// clang-format on
