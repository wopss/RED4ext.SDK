#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalFileEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalEmailGroup : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalEmailGroup";
    static constexpr const char* ALIAS = "JournalEmailGroup";

};
RED4EXT_ASSERT_SIZE(JournalEmailGroup, 0x90);
} // namespace game
using JournalEmailGroup = game::JournalEmailGroup;
} // namespace RED4ext
