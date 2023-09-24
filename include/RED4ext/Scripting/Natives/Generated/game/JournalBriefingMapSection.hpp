#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalBriefingBaseSection.hpp>

namespace RED4ext
{
namespace game
{
struct JournalBriefingMapSection : game::JournalBriefingBaseSection
{
    static constexpr const char* NAME = "gameJournalBriefingMapSection";
    static constexpr const char* ALIAS = "JournalBriefingMapSection";

    Vector3 mapLocation; // 70
    uint8_t unk7C[0x80 - 0x7C]; // 7C
};
RED4EXT_ASSERT_SIZE(JournalBriefingMapSection, 0x80);
} // namespace game
using gameJournalBriefingMapSection = game::JournalBriefingMapSection;
using JournalBriefingMapSection = game::JournalBriefingMapSection;
} // namespace RED4ext

// clang-format on
