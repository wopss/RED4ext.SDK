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

    bool lock; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(JournalSetLockQuestObjective_NodeType, 0x50);
} // namespace quest
using questJournalSetLockQuestObjective_NodeType = quest::JournalSetLockQuestObjective_NodeType;
} // namespace RED4ext

// clang-format on
