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
struct JournalQuestObjectiveCounter_NodeType : quest::IJournal_NodeType
{
    static constexpr const char* NAME = "questJournalQuestObjectiveCounter_NodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(JournalQuestObjectiveCounter_NodeType, 0x50);
} // namespace quest
using questJournalQuestObjectiveCounter_NodeType = quest::JournalQuestObjectiveCounter_NodeType;
} // namespace RED4ext

// clang-format on
