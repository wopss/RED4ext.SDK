#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntryState.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace game
{
struct JournalQuestTrackedData
{
    static constexpr const char* NAME = "gameJournalQuestTrackedData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
    Handle<game::JournalPath> entryPath; // 10
    CName entryType; // 20
    game::JournalEntryState state; // 28
    uint8_t unk2C[0x30 - 0x2C]; // 2C
};
RED4EXT_ASSERT_SIZE(JournalQuestTrackedData, 0x30);
} // namespace game
using gameJournalQuestTrackedData = game::JournalQuestTrackedData;
} // namespace RED4ext

// clang-format on
