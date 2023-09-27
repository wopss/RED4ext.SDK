#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalChangeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntryState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalNotifyOption.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace game
{
struct JournalEntryStateChangeDelayData
{
    static constexpr const char* NAME = "gameJournalEntryStateChangeDelayData";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> entryPath; // 00
    CName entryType; // 10
    game::JournalEntryState oldState; // 18
    game::JournalEntryState newState; // 1C
    game::JournalNotifyOption notifyOption; // 20
    game::JournalChangeType changeType; // 24
    float delay; // 28
    uint8_t unk2C[0x30 - 0x2C]; // 2C
};
RED4EXT_ASSERT_SIZE(JournalEntryStateChangeDelayData, 0x30);
} // namespace game
using gameJournalEntryStateChangeDelayData = game::JournalEntryStateChangeDelayData;
} // namespace RED4ext

// clang-format on
