#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IJournal_NodeType.hpp>

namespace RED4ext
{
namespace game { struct JournalPath; }

namespace quest
{
struct JournalBulkUpdate_NodeType : quest::IJournal_NodeType
{
    static constexpr const char* NAME = "questJournalBulkUpdate_NodeType";
    static constexpr const char* ALIAS = NAME;

    Handle<game::JournalPath> path; // 50
    CName requiredEntryType; // 60
    CName requiredEntryState; // 68
    CName newEntryState; // 70
    bool sendNotification; // 78
    bool propagateChange; // 79
    uint8_t unk7A[0x80 - 0x7A]; // 7A
};
RED4EXT_ASSERT_SIZE(JournalBulkUpdate_NodeType, 0x80);
} // namespace quest
using questJournalBulkUpdate_NodeType = quest::JournalBulkUpdate_NodeType;
} // namespace RED4ext

// clang-format on
