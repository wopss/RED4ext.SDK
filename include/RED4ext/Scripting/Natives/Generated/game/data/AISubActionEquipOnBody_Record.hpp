#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubActionCharacterRecordEquip_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISubActionEquipOnBody_Record : game::data::AISubActionCharacterRecordEquip_Record
{
    static constexpr const char* NAME = "gamedataAISubActionEquipOnBody_Record";
    static constexpr const char* ALIAS = "AISubActionEquipOnBody_Record";

};
RED4EXT_ASSERT_SIZE(AISubActionEquipOnBody_Record, 0x58);
} // namespace game::data
using gamedataAISubActionEquipOnBody_Record = game::data::AISubActionEquipOnBody_Record;
using AISubActionEquipOnBody_Record = game::data::AISubActionEquipOnBody_Record;
} // namespace RED4ext

// clang-format on
