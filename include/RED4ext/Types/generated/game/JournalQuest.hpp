#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/JournalFileEntry.hpp>
#include <RED4ext/Types/generated/game/JournalQuestType.hpp>

namespace RED4ext
{
namespace game { 
struct JournalQuest : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalQuest";
    static constexpr const char* ALIAS = "JournalQuest";

    LocalizationString title; // 90
    game::JournalQuestType type; // B8
    TweakDBID recommendedLevelID; // BC
    uint8_t unkC4[0xC8 - 0xC4]; // C4
    CString districtID; // C8
};
RED4EXT_ASSERT_SIZE(JournalQuest, 0xE8);
} // namespace game
using JournalQuest = game::JournalQuest;
} // namespace RED4ext
