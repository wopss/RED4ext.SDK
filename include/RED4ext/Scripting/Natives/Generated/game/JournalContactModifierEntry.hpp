#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
namespace game
{
struct JournalContactModifierEntry : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalContactModifierEntry";
    static constexpr const char* ALIAS = "JournalContactModifierEntry";

};
RED4EXT_ASSERT_SIZE(JournalContactModifierEntry, 0x70);
} // namespace game
using gameJournalContactModifierEntry = game::JournalContactModifierEntry;
using JournalContactModifierEntry = game::JournalContactModifierEntry;
} // namespace RED4ext

// clang-format on
