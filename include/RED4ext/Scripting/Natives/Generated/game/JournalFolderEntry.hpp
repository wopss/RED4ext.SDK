#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalContainerEntry.hpp>

namespace RED4ext
{
namespace game
{
struct JournalFolderEntry : game::JournalContainerEntry
{
    static constexpr const char* NAME = "gameJournalFolderEntry";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk88[0xA8 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(JournalFolderEntry, 0xA8);
} // namespace game
using gameJournalFolderEntry = game::JournalFolderEntry;
} // namespace RED4ext

// clang-format on
