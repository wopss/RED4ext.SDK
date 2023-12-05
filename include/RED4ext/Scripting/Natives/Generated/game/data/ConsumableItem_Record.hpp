#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Item_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ConsumableItem_Record : game::data::Item_Record
{
    static constexpr const char* NAME = "gamedataConsumableItem_Record";
    static constexpr const char* ALIAS = "ConsumableItem_Record";

    uint8_t unk478[0x4D0 - 0x478]; // 478
};
RED4EXT_ASSERT_SIZE(ConsumableItem_Record, 0x4D0);
} // namespace game::data
using gamedataConsumableItem_Record = game::data::ConsumableItem_Record;
using ConsumableItem_Record = game::data::ConsumableItem_Record;
} // namespace RED4ext

// clang-format on
