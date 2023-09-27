#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalBriefingBaseSection.hpp>

namespace RED4ext
{
struct Bink;

namespace game
{
struct JournalBriefingVideoSection : game::JournalBriefingBaseSection
{
    static constexpr const char* NAME = "gameJournalBriefingVideoSection";
    static constexpr const char* ALIAS = "JournalBriefingVideoSection";

    RaRef<Bink> videoResource; // 70
};
RED4EXT_ASSERT_SIZE(JournalBriefingVideoSection, 0x78);
} // namespace game
using gameJournalBriefingVideoSection = game::JournalBriefingVideoSection;
using JournalBriefingVideoSection = game::JournalBriefingVideoSection;
} // namespace RED4ext

// clang-format on
