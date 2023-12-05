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
struct JournalTrackQuest_NodeType : quest::IJournal_NodeType
{
    static constexpr const char* NAME = "questJournalTrackQuest_NodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(JournalTrackQuest_NodeType, 0x50);
} // namespace quest
using questJournalTrackQuest_NodeType = quest::JournalTrackQuest_NodeType;
} // namespace RED4ext

// clang-format on
