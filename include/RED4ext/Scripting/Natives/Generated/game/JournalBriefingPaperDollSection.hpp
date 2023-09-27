#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalBriefingBaseSection.hpp>

namespace RED4ext
{
namespace game
{
struct JournalBriefingPaperDollSection : game::JournalBriefingBaseSection
{
    static constexpr const char* NAME = "gameJournalBriefingPaperDollSection";
    static constexpr const char* ALIAS = "JournalBriefingPaperDollSection";

};
RED4EXT_ASSERT_SIZE(JournalBriefingPaperDollSection, 0x70);
} // namespace game
using gameJournalBriefingPaperDollSection = game::JournalBriefingPaperDollSection;
using JournalBriefingPaperDollSection = game::JournalBriefingPaperDollSection;
} // namespace RED4ext

// clang-format on
