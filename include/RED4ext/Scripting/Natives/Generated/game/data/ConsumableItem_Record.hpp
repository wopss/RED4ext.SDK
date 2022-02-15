#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Item_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ConsumableItem_Record : game::data::Item_Record
{
    static constexpr const char* NAME = "gamedataConsumableItem_Record";
    static constexpr const char* ALIAS = "ConsumableItem_Record";

    uint8_t unk148[0x160 - 0x148]; // 148
};
RED4EXT_ASSERT_SIZE(ConsumableItem_Record, 0x160);
} // namespace game::data
using ConsumableItem_Record = game::data::ConsumableItem_Record;
} // namespace RED4ext
