#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IJournal_NodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct JournalEntry_NodeType : quest::IJournal_NodeType
{
    static constexpr const char* NAME = "questJournalEntry_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool sendNotification; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(JournalEntry_NodeType, 0x48);
} // namespace quest
} // namespace RED4ext
