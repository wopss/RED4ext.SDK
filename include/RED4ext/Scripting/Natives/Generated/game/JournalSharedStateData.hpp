#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/JournalEntryState.hpp>

namespace RED4ext
{
namespace game
{
struct JournalSharedStateData
{
    static constexpr const char* NAME = "gameJournalSharedStateData";
    static constexpr const char* ALIAS = NAME;

    uint32_t pathHash; // 00
    game::JournalEntryState entryState; // 04
    uint8_t unk08[0xC - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(JournalSharedStateData, 0xC);
} // namespace game
using gameJournalSharedStateData = game::JournalSharedStateData;
} // namespace RED4ext

// clang-format on
