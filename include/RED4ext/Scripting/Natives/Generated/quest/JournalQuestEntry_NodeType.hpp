#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IJournal_NodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct JournalQuestEntry_NodeType : quest::IJournal_NodeType
{
    static constexpr const char* NAME = "questJournalQuestEntry_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool sendNotification; // 48
    bool trackQuest; // 49
    uint8_t unk4A[0x50 - 0x4A]; // 4A
};
RED4EXT_ASSERT_SIZE(JournalQuestEntry_NodeType, 0x50);
} // namespace quest
} // namespace RED4ext
