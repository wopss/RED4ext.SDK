#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace game
{
struct JournalQuestCodexLink : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalQuestCodexLink";
    static constexpr const char* ALIAS = "JournalQuestCodexLink";

    Handle<game::JournalPath> path; // 70
};
RED4EXT_ASSERT_SIZE(JournalQuestCodexLink, 0x80);
} // namespace game
using gameJournalQuestCodexLink = game::JournalQuestCodexLink;
using JournalQuestCodexLink = game::JournalQuestCodexLink;
} // namespace RED4ext

// clang-format on
