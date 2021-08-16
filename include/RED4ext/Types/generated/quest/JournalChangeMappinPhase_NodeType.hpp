#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/data/MappinPhase.hpp>
#include <RED4ext/Types/generated/quest/IJournal_NodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct JournalChangeMappinPhase_NodeType : quest::IJournal_NodeType
{
    static constexpr const char* NAME = "questJournalChangeMappinPhase_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::data::MappinPhase phase; // 40
    bool notifyUI; // 44
    uint8_t unk45[0x48 - 0x45]; // 45
};
RED4EXT_ASSERT_SIZE(JournalChangeMappinPhase_NodeType, 0x48);
} // namespace quest
} // namespace RED4ext
