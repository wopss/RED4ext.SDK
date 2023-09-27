#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IJournal_NodeType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/JournalQuestEntry_NodeTypeNodeVersion.hpp>

namespace RED4ext
{
namespace quest
{
struct JournalQuestEntry_NodeType : quest::IJournal_NodeType
{
    static constexpr const char* NAME = "questJournalQuestEntry_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool sendNotification; // 48
    bool trackQuest; // 49
    bool optional; // 4A
    quest::JournalQuestEntry_NodeTypeNodeVersion version; // 4B
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(JournalQuestEntry_NodeType, 0x50);
} // namespace quest
using questJournalQuestEntry_NodeType = quest::JournalQuestEntry_NodeType;
} // namespace RED4ext

// clang-format on
