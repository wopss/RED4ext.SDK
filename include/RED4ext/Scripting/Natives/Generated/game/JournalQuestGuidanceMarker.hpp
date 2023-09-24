#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/QuestGuidanceMarkerPathfindingType.hpp>

namespace RED4ext
{
namespace game
{
struct JournalQuestGuidanceMarker : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalQuestGuidanceMarker";
    static constexpr const char* ALIAS = "JournalQuestGuidanceMarker";

    NodeRef nodeRef; // 70
    game::QuestGuidanceMarkerPathfindingType pathfindingType; // 78
    bool isPortal; // 7C
    uint8_t unk7D[0x80 - 0x7D]; // 7D
};
RED4EXT_ASSERT_SIZE(JournalQuestGuidanceMarker, 0x80);
} // namespace game
using gameJournalQuestGuidanceMarker = game::JournalQuestGuidanceMarker;
using JournalQuestGuidanceMarker = game::JournalQuestGuidanceMarker;
} // namespace RED4ext

// clang-format on
