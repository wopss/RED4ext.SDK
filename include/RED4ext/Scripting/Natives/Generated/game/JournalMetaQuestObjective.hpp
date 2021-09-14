#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalMetaQuestObjective : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalMetaQuestObjective";
    static constexpr const char* ALIAS = "JournalMetaQuestObjective";

    LocalizationString description; // 60
    uint32_t progressPercent; // 88
    TweakDBID iconID; // 8C
    uint8_t unk94[0x98 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(JournalMetaQuestObjective, 0x98);
} // namespace game
using JournalMetaQuestObjective = game::JournalMetaQuestObjective;
} // namespace RED4ext
