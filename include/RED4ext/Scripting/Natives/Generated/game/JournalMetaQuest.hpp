#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalFileEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalMetaQuest : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalMetaQuest";
    static constexpr const char* ALIAS = "JournalMetaQuest";

    LocalizationString title; // 90
};
RED4EXT_ASSERT_SIZE(JournalMetaQuest, 0xB8);
} // namespace game
using JournalMetaQuest = game::JournalMetaQuest;
} // namespace RED4ext
