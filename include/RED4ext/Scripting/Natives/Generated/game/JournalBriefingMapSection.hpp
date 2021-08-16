#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalBriefingBaseSection.hpp>

namespace RED4ext
{
namespace game { 
struct JournalBriefingMapSection : game::JournalBriefingBaseSection
{
    static constexpr const char* NAME = "gameJournalBriefingMapSection";
    static constexpr const char* ALIAS = "JournalBriefingMapSection";

    Vector3 mapLocation; // 60
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(JournalBriefingMapSection, 0x70);
} // namespace game
using JournalBriefingMapSection = game::JournalBriefingMapSection;
} // namespace RED4ext
