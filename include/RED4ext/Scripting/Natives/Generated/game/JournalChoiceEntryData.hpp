#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace game
{
struct JournalChoiceEntryData
{
    static constexpr const char* NAME = "gameJournalChoiceEntryData";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> entryPath; // 00
};
RED4EXT_ASSERT_SIZE(JournalChoiceEntryData, 0x10);
} // namespace game
using gameJournalChoiceEntryData = game::JournalChoiceEntryData;
} // namespace RED4ext

// clang-format on
