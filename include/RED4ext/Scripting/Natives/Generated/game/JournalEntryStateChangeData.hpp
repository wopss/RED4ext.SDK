#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalChangeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntryState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalNotifyOption.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace game
{
struct JournalEntryStateChangeData
{
    static constexpr const char* NAME = "gameJournalEntryStateChangeData";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> entryPath; // 00
    CString entryName; // 10
    CName entryType; // 30
    bool isEntryTracked; // 38
    bool isQuestEntryTracked; // 39
    uint8_t unk3A[0x3C - 0x3A]; // 3A
    game::JournalEntryState oldState; // 3C
    game::JournalEntryState newState; // 40
    game::JournalNotifyOption notifyOption; // 44
    game::JournalChangeType changeType; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(JournalEntryStateChangeData, 0x50);
} // namespace game
using gameJournalEntryStateChangeData = game::JournalEntryStateChangeData;
} // namespace RED4ext

// clang-format on
