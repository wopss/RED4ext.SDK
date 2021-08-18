#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubActionCharacterRecordEquip_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubActionSetEquipSecondaryWeapons_Record : game::data::AISubActionCharacterRecordEquip_Record
{
    static constexpr const char* NAME = "gamedataAISubActionSetEquipSecondaryWeapons_Record";
    static constexpr const char* ALIAS = "AISubActionSetEquipSecondaryWeapons_Record";

};
RED4EXT_ASSERT_SIZE(AISubActionSetEquipSecondaryWeapons_Record, 0x50);
} // namespace game::data
using AISubActionSetEquipSecondaryWeapons_Record = game::data::AISubActionSetEquipSecondaryWeapons_Record;
} // namespace RED4ext
