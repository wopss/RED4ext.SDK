#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalFileEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalTarotGroup : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalTarotGroup";
    static constexpr const char* ALIAS = "JournalTarotGroup";

};
RED4EXT_ASSERT_SIZE(JournalTarotGroup, 0x90);
} // namespace game
using JournalTarotGroup = game::JournalTarotGroup;
} // namespace RED4ext
