#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
namespace game { 
struct JournalCodexDescription : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalCodexDescription";
    static constexpr const char* ALIAS = "JournalCodexDescription";

    LocalizationString subTitle; // 60
    LocalizationString textContent; // 88
};
RED4EXT_ASSERT_SIZE(JournalCodexDescription, 0xB0);
} // namespace game
using JournalCodexDescription = game::JournalCodexDescription;
} // namespace RED4ext
