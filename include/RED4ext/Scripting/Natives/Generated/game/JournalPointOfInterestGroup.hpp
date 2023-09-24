#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalFileEntry.hpp>

namespace RED4ext
{
namespace game
{
struct JournalPointOfInterestGroup : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalPointOfInterestGroup";
    static constexpr const char* ALIAS = "JournalPointOfInterestGroup";

};
RED4EXT_ASSERT_SIZE(JournalPointOfInterestGroup, 0xA0);
} // namespace game
using gameJournalPointOfInterestGroup = game::JournalPointOfInterestGroup;
using JournalPointOfInterestGroup = game::JournalPointOfInterestGroup;
} // namespace RED4ext

// clang-format on
