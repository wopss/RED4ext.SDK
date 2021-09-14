#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalQuestObjectiveBase.hpp>

namespace RED4ext
{
namespace game { 
struct JournalQuestObjective : game::JournalQuestObjectiveBase
{
    static constexpr const char* NAME = "gameJournalQuestObjective";
    static constexpr const char* ALIAS = "JournalQuestObjective";

};
RED4EXT_ASSERT_SIZE(JournalQuestObjective, 0xD8);
} // namespace game
using JournalQuestObjective = game::JournalQuestObjective;
} // namespace RED4ext
