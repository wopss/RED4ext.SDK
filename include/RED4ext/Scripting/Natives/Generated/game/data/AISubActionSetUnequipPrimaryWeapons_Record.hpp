#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubActionCharacterRecordUnequip_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct AISubActionSetUnequipPrimaryWeapons_Record : game::data::AISubActionCharacterRecordUnequip_Record
{
    static constexpr const char* NAME = "gamedataAISubActionSetUnequipPrimaryWeapons_Record";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AISubActionSetUnequipPrimaryWeapons_Record, 0x50);
} // namespace game::data
} // namespace RED4ext
