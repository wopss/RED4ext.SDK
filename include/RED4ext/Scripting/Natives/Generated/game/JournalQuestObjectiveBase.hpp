#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalContainerEntry.hpp>

namespace RED4ext
{
namespace game
{
struct JournalQuestObjectiveBase : game::JournalContainerEntry
{
    static constexpr const char* NAME = "gameJournalQuestObjectiveBase";
    static constexpr const char* ALIAS = "JournalQuestObjectiveBase";

    LocalizationString description; // 88
    uint32_t counter; // B0
    bool optional; // B4
    uint8_t unkB5[0xB8 - 0xB5]; // B5
    NodeRef locationPrefabRef; // B8
    CString districtID; // C0
    TweakDBID itemID; // E0
};
RED4EXT_ASSERT_SIZE(JournalQuestObjectiveBase, 0xE8);
} // namespace game
using gameJournalQuestObjectiveBase = game::JournalQuestObjectiveBase;
using JournalQuestObjectiveBase = game::JournalQuestObjectiveBase;
} // namespace RED4ext

// clang-format on
