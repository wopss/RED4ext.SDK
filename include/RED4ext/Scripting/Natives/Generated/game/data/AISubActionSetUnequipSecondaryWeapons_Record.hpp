#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubActionCharacterRecordUnequip_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISubActionSetUnequipSecondaryWeapons_Record : game::data::AISubActionCharacterRecordUnequip_Record
{
    static constexpr const char* NAME = "gamedataAISubActionSetUnequipSecondaryWeapons_Record";
    static constexpr const char* ALIAS = "AISubActionSetUnequipSecondaryWeapons_Record";

};
RED4EXT_ASSERT_SIZE(AISubActionSetUnequipSecondaryWeapons_Record, 0x60);
} // namespace game::data
using gamedataAISubActionSetUnequipSecondaryWeapons_Record = game::data::AISubActionSetUnequipSecondaryWeapons_Record;
using AISubActionSetUnequipSecondaryWeapons_Record = game::data::AISubActionSetUnequipSecondaryWeapons_Record;
} // namespace RED4ext

// clang-format on
