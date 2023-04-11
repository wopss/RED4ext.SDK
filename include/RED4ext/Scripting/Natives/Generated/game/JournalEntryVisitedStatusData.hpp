#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace game
{
struct JournalEntryVisitedStatusData
{
    static constexpr const char* NAME = "gameJournalEntryVisitedStatusData";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> entryPath; // 00
    CName entryType; // 10
    bool isVisited; // 18
    uint8_t unk19[0x20 - 0x19]; // 19
};
RED4EXT_ASSERT_SIZE(JournalEntryVisitedStatusData, 0x20);
} // namespace game
using gameJournalEntryVisitedStatusData = game::JournalEntryVisitedStatusData;
} // namespace RED4ext

// clang-format on
