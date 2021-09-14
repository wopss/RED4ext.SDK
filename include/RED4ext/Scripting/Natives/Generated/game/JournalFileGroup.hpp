#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalFileEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalFileGroup : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalFileGroup";
    static constexpr const char* ALIAS = "JournalFileGroup";

};
RED4EXT_ASSERT_SIZE(JournalFileGroup, 0x90);
} // namespace game
using JournalFileGroup = game::JournalFileGroup;
} // namespace RED4ext
