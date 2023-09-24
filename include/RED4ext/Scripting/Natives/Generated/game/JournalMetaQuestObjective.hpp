#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
namespace game
{
struct JournalMetaQuestObjective : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalMetaQuestObjective";
    static constexpr const char* ALIAS = "JournalMetaQuestObjective";

    LocalizationString description; // 70
    uint32_t progressPercent; // 98
    TweakDBID iconID; // 9C
    uint8_t unkA4[0xA8 - 0xA4]; // A4
};
RED4EXT_ASSERT_SIZE(JournalMetaQuestObjective, 0xA8);
} // namespace game
using gameJournalMetaQuestObjective = game::JournalMetaQuestObjective;
using JournalMetaQuestObjective = game::JournalMetaQuestObjective;
} // namespace RED4ext

// clang-format on
