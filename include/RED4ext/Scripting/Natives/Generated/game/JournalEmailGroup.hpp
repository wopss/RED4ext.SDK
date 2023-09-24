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
struct JournalEmailGroup : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalEmailGroup";
    static constexpr const char* ALIAS = "JournalEmailGroup";

};
RED4EXT_ASSERT_SIZE(JournalEmailGroup, 0xA0);
} // namespace game
using gameJournalEmailGroup = game::JournalEmailGroup;
using JournalEmailGroup = game::JournalEmailGroup;
} // namespace RED4ext

// clang-format on
