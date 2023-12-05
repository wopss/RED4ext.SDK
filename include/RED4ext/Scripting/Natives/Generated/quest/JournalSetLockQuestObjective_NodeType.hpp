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
struct JournalSetLockQuestObjective_NodeType : quest::IJournal_NodeType
{
    static constexpr const char* NAME = "questJournalSetLockQuestObjective_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool lock; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(JournalSetLockQuestObjective_NodeType, 0x58);
} // namespace quest
using questJournalSetLockQuestObjective_NodeType = quest::JournalSetLockQuestObjective_NodeType;
} // namespace RED4ext

// clang-format on
