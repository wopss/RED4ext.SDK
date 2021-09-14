#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubActionCharacterRecordEquip_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubActionSetEquipPrimaryWeapons_Record : game::data::AISubActionCharacterRecordEquip_Record
{
    static constexpr const char* NAME = "gamedataAISubActionSetEquipPrimaryWeapons_Record";
    static constexpr const char* ALIAS = "AISubActionSetEquipPrimaryWeapons_Record";

};
RED4EXT_ASSERT_SIZE(AISubActionSetEquipPrimaryWeapons_Record, 0x50);
} // namespace game::data
using AISubActionSetEquipPrimaryWeapons_Record = game::data::AISubActionSetEquipPrimaryWeapons_Record;
} // namespace RED4ext
