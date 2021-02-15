#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/game/JournalEntryUserState.hpp>
#include <RED4ext/Types/generated/quest/IJournalConditionType.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest { 
struct JournalEntry_ConditionType : quest::IJournalConditionType
{
    static constexpr const char* NAME = "questJournalEntry_ConditionType";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> path; // 38
    game::JournalEntryUserState state; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(JournalEntry_ConditionType, 0x50);
} // namespace quest
} // namespace RED4ext
