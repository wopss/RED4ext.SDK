#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/MappinPhase.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IJournal_NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct JournalChangeMappinPhase_NodeType : quest::IJournal_NodeType
{
    static constexpr const char* NAME = "questJournalChangeMappinPhase_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::data::MappinPhase phase; // 50
    bool notifyUI; // 54
    uint8_t unk55[0x58 - 0x55]; // 55
};
RED4EXT_ASSERT_SIZE(JournalChangeMappinPhase_NodeType, 0x58);
} // namespace quest
using questJournalChangeMappinPhase_NodeType = quest::JournalChangeMappinPhase_NodeType;
} // namespace RED4ext

// clang-format on
