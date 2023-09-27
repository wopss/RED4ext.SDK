#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalFileEntry.hpp>

namespace RED4ext
{
namespace game
{
struct JournalCodexCategory : game::JournalFileEntry
{
    static constexpr const char* NAME = "gameJournalCodexCategory";
    static constexpr const char* ALIAS = "JournalCodexCategory";

    LocalizationString categoryName; // A0
};
RED4EXT_ASSERT_SIZE(JournalCodexCategory, 0xC8);
} // namespace game
using gameJournalCodexCategory = game::JournalCodexCategory;
using JournalCodexCategory = game::JournalCodexCategory;
} // namespace RED4ext

// clang-format on
