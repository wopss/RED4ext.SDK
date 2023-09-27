#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalFolderEntry.hpp>

namespace RED4ext
{
namespace game
{
struct JournalPrimaryFolderEntry : game::JournalFolderEntry
{
    static constexpr const char* NAME = "gameJournalPrimaryFolderEntry";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(JournalPrimaryFolderEntry, 0xA8);
} // namespace game
using gameJournalPrimaryFolderEntry = game::JournalPrimaryFolderEntry;
} // namespace RED4ext

// clang-format on
