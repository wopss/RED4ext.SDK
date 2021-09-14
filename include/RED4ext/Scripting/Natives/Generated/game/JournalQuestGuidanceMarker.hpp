#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/QuestGuidanceMarkerPathfindingType.hpp>

namespace RED4ext
{
namespace game { 
struct JournalQuestGuidanceMarker : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalQuestGuidanceMarker";
    static constexpr const char* ALIAS = "JournalQuestGuidanceMarker";

    NodeRef nodeRef; // 60
    game::QuestGuidanceMarkerPathfindingType pathfindingType; // 68
    bool isPortal; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
};
RED4EXT_ASSERT_SIZE(JournalQuestGuidanceMarker, 0x70);
} // namespace game
using JournalQuestGuidanceMarker = game::JournalQuestGuidanceMarker;
} // namespace RED4ext
