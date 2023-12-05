#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IJournal_NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct JournalEntry_NodeType : quest::IJournal_NodeType
{
    static constexpr const char* NAME = "questJournalEntry_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool sendNotification; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(JournalEntry_NodeType, 0x58);
} // namespace quest
using questJournalEntry_NodeType = quest::JournalEntry_NodeType;
} // namespace RED4ext

// clang-format on
