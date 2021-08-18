#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalContainerEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalFolderEntry : game::JournalContainerEntry
{
    static constexpr const char* NAME = "gameJournalFolderEntry";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x98 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(JournalFolderEntry, 0x98);
} // namespace game
} // namespace RED4ext
