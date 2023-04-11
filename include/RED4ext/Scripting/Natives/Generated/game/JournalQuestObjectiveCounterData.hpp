#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace game
{
struct JournalQuestObjectiveCounterData
{
    static constexpr const char* NAME = "gameJournalQuestObjectiveCounterData";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> entryPath; // 00
    int32_t oldValue; // 10
    int32_t newValue; // 14
};
RED4EXT_ASSERT_SIZE(JournalQuestObjectiveCounterData, 0x18);
} // namespace game
using gameJournalQuestObjectiveCounterData = game::JournalQuestObjectiveCounterData;
} // namespace RED4ext

// clang-format on
