#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/JournalBriefingBaseSection.hpp>

namespace RED4ext
{
struct Bink;

namespace game { 
struct JournalBriefingVideoSection : game::JournalBriefingBaseSection
{
    static constexpr const char* NAME = "gameJournalBriefingVideoSection";
    static constexpr const char* ALIAS = "JournalBriefingVideoSection";

    RaRef<Bink> videoResource; // 60
};
RED4EXT_ASSERT_SIZE(JournalBriefingVideoSection, 0x68);
} // namespace game
using JournalBriefingVideoSection = game::JournalBriefingVideoSection;
} // namespace RED4ext
