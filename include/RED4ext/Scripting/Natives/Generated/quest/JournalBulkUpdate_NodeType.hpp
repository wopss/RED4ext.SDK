#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IJournal_NodeType.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest { 
struct JournalBulkUpdate_NodeType : quest::IJournal_NodeType
{
    static constexpr const char* NAME = "questJournalBulkUpdate_NodeType";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> path; // 48
    CName requiredEntryType; // 58
    CName requiredEntryState; // 60
    CName newEntryState; // 68
    bool sendNotification; // 70
    bool propagateChange; // 71
    uint8_t unk72[0x78 - 0x72]; // 72
};
RED4EXT_ASSERT_SIZE(JournalBulkUpdate_NodeType, 0x78);
} // namespace quest
} // namespace RED4ext
