#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalFileEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalCodexCategory : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalCodexCategory";
    static constexpr const char* ALIAS = "JournalCodexCategory";

    LocalizationString categoryName; // 90
};
RED4EXT_ASSERT_SIZE(JournalCodexCategory, 0xB8);
} // namespace game
using JournalCodexCategory = game::JournalCodexCategory;
} // namespace RED4ext
