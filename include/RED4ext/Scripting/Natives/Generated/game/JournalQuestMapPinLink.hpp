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
struct JournalQuestMapPinLink : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalQuestMapPinLink";
    static constexpr const char* ALIAS = "JournalQuestMapPinLink";

    Handle<game::JournalPath> path; // 70
};
RED4EXT_ASSERT_SIZE(JournalQuestMapPinLink, 0x80);
} // namespace game
using gameJournalQuestMapPinLink = game::JournalQuestMapPinLink;
using JournalQuestMapPinLink = game::JournalQuestMapPinLink;
} // namespace RED4ext

// clang-format on
