#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IJournalManager.hpp>

namespace RED4ext
{
namespace game { 
struct JournalManager : game::IJournalManager
{
    static constexpr const char* NAME = "gameJournalManager";
    static constexpr const char* ALIAS = "JournalManager";

    uint8_t unk58[0x248 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(JournalManager, 0x248);
} // namespace game
using JournalManager = game::JournalManager;
} // namespace RED4ext
