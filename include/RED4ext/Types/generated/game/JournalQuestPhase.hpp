#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/JournalContainerEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalQuestPhase : game::JournalContainerEntry
{
    static constexpr const char* NAME = "gameJournalQuestPhase";
    static constexpr const char* ALIAS = "JournalQuestPhase";

    NodeRef locationPrefabRef; // 78
};
RED4EXT_ASSERT_SIZE(JournalQuestPhase, 0x80);
} // namespace game
using JournalQuestPhase = game::JournalQuestPhase;
} // namespace RED4ext
