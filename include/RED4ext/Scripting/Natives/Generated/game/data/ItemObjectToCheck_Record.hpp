#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ObjectToCheck_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ItemObjectToCheck_Record : game::data::ObjectToCheck_Record
{
    static constexpr const char* NAME = "gamedataItemObjectToCheck_Record";
    static constexpr const char* ALIAS = "ItemObjectToCheck_Record";

    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ItemObjectToCheck_Record, 0x50);
} // namespace game::data
using ItemObjectToCheck_Record = game::data::ItemObjectToCheck_Record;
} // namespace RED4ext

// clang-format on
