#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubActionCharacterRecordEquip_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubActionEquipOnSlot_Record : game::data::AISubActionCharacterRecordEquip_Record
{
    static constexpr const char* NAME = "gamedataAISubActionEquipOnSlot_Record";
    static constexpr const char* ALIAS = "AISubActionEquipOnSlot_Record";

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AISubActionEquipOnSlot_Record, 0x58);
} // namespace game::data
using AISubActionEquipOnSlot_Record = game::data::AISubActionEquipOnSlot_Record;
} // namespace RED4ext
