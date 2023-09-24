#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalQuestObjectiveBase.hpp>

namespace RED4ext
{
namespace game
{
struct JournalQuestSubObjective : game::JournalQuestObjectiveBase
{
    static constexpr const char* NAME = "gameJournalQuestSubObjective";
    static constexpr const char* ALIAS = "JournalQuestSubObjective";

};
RED4EXT_ASSERT_SIZE(JournalQuestSubObjective, 0xE8);
} // namespace game
using gameJournalQuestSubObjective = game::JournalQuestSubObjective;
using JournalQuestSubObjective = game::JournalQuestSubObjective;
} // namespace RED4ext

// clang-format on
