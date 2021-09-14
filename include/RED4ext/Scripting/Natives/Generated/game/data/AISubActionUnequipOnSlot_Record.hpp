#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubActionCharacterRecordUnequip_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubActionUnequipOnSlot_Record : game::data::AISubActionCharacterRecordUnequip_Record
{
    static constexpr const char* NAME = "gamedataAISubActionUnequipOnSlot_Record";
    static constexpr const char* ALIAS = "AISubActionUnequipOnSlot_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AISubActionUnequipOnSlot_Record, 0x58);
} // namespace game::data
using AISubActionUnequipOnSlot_Record = game::data::AISubActionUnequipOnSlot_Record;
} // namespace RED4ext
