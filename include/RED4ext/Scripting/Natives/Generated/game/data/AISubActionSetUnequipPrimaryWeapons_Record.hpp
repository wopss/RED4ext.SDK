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
struct AISubActionSetUnequipPrimaryWeapons_Record : game::data::AISubActionCharacterRecordUnequip_Record
{
    static constexpr const char* NAME = "gamedataAISubActionSetUnequipPrimaryWeapons_Record";
    static constexpr const char* ALIAS = "AISubActionSetUnequipPrimaryWeapons_Record";

};
RED4EXT_ASSERT_SIZE(AISubActionSetUnequipPrimaryWeapons_Record, 0x60);
} // namespace game::data
using gamedataAISubActionSetUnequipPrimaryWeapons_Record = game::data::AISubActionSetUnequipPrimaryWeapons_Record;
using AISubActionSetUnequipPrimaryWeapons_Record = game::data::AISubActionSetUnequipPrimaryWeapons_Record;
} // namespace RED4ext

// clang-format on
