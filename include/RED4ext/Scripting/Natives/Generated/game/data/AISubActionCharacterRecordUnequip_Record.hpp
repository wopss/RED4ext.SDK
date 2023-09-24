#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AISubAction_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AISubActionCharacterRecordUnequip_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionCharacterRecordUnequip_Record";
    static constexpr const char* ALIAS = "AISubActionCharacterRecordUnequip_Record";

    uint8_t unk48[0x60 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionCharacterRecordUnequip_Record, 0x60);
} // namespace game::data
using gamedataAISubActionCharacterRecordUnequip_Record = game::data::AISubActionCharacterRecordUnequip_Record;
using AISubActionCharacterRecordUnequip_Record = game::data::AISubActionCharacterRecordUnequip_Record;
} // namespace RED4ext

// clang-format on
