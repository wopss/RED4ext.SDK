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
struct JournalContact_NodeType : quest::IJournal_NodeType
{
    static constexpr const char* NAME = "questJournalContact_NodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(JournalContact_NodeType, 0x50);
} // namespace quest
using questJournalContact_NodeType = quest::JournalContact_NodeType;
} // namespace RED4ext

// clang-format on
