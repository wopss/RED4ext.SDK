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
struct JournalBriefingBaseSection : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalBriefingBaseSection";
    static constexpr const char* ALIAS = "JournalBriefingBaseSection";

};
RED4EXT_ASSERT_SIZE(JournalBriefingBaseSection, 0x70);
} // namespace game
using gameJournalBriefingBaseSection = game::JournalBriefingBaseSection;
using JournalBriefingBaseSection = game::JournalBriefingBaseSection;
} // namespace RED4ext

// clang-format on
