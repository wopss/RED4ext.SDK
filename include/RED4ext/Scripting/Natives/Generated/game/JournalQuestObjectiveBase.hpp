#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalContainerEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalQuestObjectiveBase : game::JournalContainerEntry
{
    static constexpr const char* NAME = "gameJournalQuestObjectiveBase";
    static constexpr const char* ALIAS = "JournalQuestObjectiveBase";

    LocalizationString description; // 78
    uint32_t counter; // A0
    bool optional; // A4
    uint8_t unkA5[0xA8 - 0xA5]; // A5
    NodeRef locationPrefabRef; // A8
    CString districtID; // B0
    TweakDBID itemID; // D0
};
RED4EXT_ASSERT_SIZE(JournalQuestObjectiveBase, 0xD8);
} // namespace game
using JournalQuestObjectiveBase = game::JournalQuestObjectiveBase;
} // namespace RED4ext
