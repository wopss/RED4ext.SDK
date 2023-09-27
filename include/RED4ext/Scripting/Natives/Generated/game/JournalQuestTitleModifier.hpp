#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
namespace game
{
struct JournalQuestTitleModifier : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalQuestTitleModifier";
    static constexpr const char* ALIAS = "JournalQuestTitleModifier";

    LocalizationString title; // 70
};
RED4EXT_ASSERT_SIZE(JournalQuestTitleModifier, 0x98);
} // namespace game
using gameJournalQuestTitleModifier = game::JournalQuestTitleModifier;
using JournalQuestTitleModifier = game::JournalQuestTitleModifier;
} // namespace RED4ext

// clang-format on
