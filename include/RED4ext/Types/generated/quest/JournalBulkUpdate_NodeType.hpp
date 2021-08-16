#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/quest/IJournal_NodeType.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest { 
struct JournalBulkUpdate_NodeType : quest::IJournal_NodeType
{
    static constexpr const char* NAME = "questJournalBulkUpdate_NodeType";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> path; // 40
    CName requiredEntryType; // 50
    CName requiredEntryState; // 58
    CName newEntryState; // 60
    bool sendNotification; // 68
    bool propagateChange; // 69
    uint8_t unk6A[0x70 - 0x6A]; // 6A
};
RED4EXT_ASSERT_SIZE(JournalBulkUpdate_NodeType, 0x70);
} // namespace quest
} // namespace RED4ext
