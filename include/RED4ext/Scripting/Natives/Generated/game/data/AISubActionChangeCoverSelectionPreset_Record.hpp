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
struct AISubActionChangeCoverSelectionPreset_Record : game::data::AISubAction_Record
{
    static constexpr const char* NAME = "gamedataAISubActionChangeCoverSelectionPreset_Record";
    static constexpr const char* ALIAS = "AISubActionChangeCoverSelectionPreset_Record";

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AISubActionChangeCoverSelectionPreset_Record, 0x90);
} // namespace game::data
using gamedataAISubActionChangeCoverSelectionPreset_Record = game::data::AISubActionChangeCoverSelectionPreset_Record;
using AISubActionChangeCoverSelectionPreset_Record = game::data::AISubActionChangeCoverSelectionPreset_Record;
} // namespace RED4ext

// clang-format on
