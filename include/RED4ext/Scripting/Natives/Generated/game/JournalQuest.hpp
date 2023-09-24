#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalFileEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalQuestType.hpp>

namespace RED4ext
{
namespace game
{
struct JournalQuest : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalQuest";
    static constexpr const char* ALIAS = "JournalQuest";

    LocalizationString title; // A0
    game::JournalQuestType type; // C8
    TweakDBID recommendedLevelID; // CC
    uint8_t unkD4[0xD8 - 0xD4]; // D4
    CString districtID; // D8
};
RED4EXT_ASSERT_SIZE(JournalQuest, 0xF8);
} // namespace game
using gameJournalQuest = game::JournalQuest;
using JournalQuest = game::JournalQuest;
} // namespace RED4ext

// clang-format on
