#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntry.hpp>

namespace RED4ext
{
namespace game
{
struct JournalCodexDescription : game::JournalEntry
{
    static constexpr const char* NAME = "gameJournalCodexDescription";
    static constexpr const char* ALIAS = "JournalCodexDescription";

    LocalizationString subTitle; // 70
    LocalizationString textContent; // 98
};
RED4EXT_ASSERT_SIZE(JournalCodexDescription, 0xC0);
} // namespace game
using gameJournalCodexDescription = game::JournalCodexDescription;
using JournalCodexDescription = game::JournalCodexDescription;
} // namespace RED4ext

// clang-format on
