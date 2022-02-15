#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/MappinPhase.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IJournal_NodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct JournalChangeMappinPhase_NodeType : quest::IJournal_NodeType
{
    static constexpr const char* NAME = "questJournalChangeMappinPhase_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::data::MappinPhase phase; // 48
    bool notifyUI; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
};
RED4EXT_ASSERT_SIZE(JournalChangeMappinPhase_NodeType, 0x50);
} // namespace quest
} // namespace RED4ext
