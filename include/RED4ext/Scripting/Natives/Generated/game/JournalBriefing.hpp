#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalFileEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalBriefing : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalBriefing";
    static constexpr const char* ALIAS = "JournalBriefing";

};
RED4EXT_ASSERT_SIZE(JournalBriefing, 0x90);
} // namespace game
using JournalBriefing = game::JournalBriefing;
} // namespace RED4ext
