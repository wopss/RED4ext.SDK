#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SignalStoppingNodeDefinition.hpp>

namespace RED4ext
{
namespace quest { struct IJournal_NodeType; }

namespace quest
{
struct JournalNodeDefinition : quest::SignalStoppingNodeDefinition
{
    static constexpr const char* NAME = "questJournalNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::IJournal_NodeType> type; // 48
    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(JournalNodeDefinition, 0x60);
} // namespace quest
using questJournalNodeDefinition = quest::JournalNodeDefinition;
} // namespace RED4ext

// clang-format on
