#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalContainerEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalFileEntry : game::JournalContainerEntry
{
    static constexpr const char* NAME = "gameJournalFileEntry";
    static constexpr const char* ALIAS = "JournalFileEntry";

    uint8_t unk78[0x90 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(JournalFileEntry, 0x90);
} // namespace game
using JournalFileEntry = game::JournalFileEntry;
} // namespace RED4ext
