#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IReplicatedGameSystem.hpp>

namespace RED4ext
{
namespace game { 
struct IJournalManager : game::IReplicatedGameSystem
{
    static constexpr const char* NAME = "gameIJournalManager";
    static constexpr const char* ALIAS = "IJournalManager";

};
RED4EXT_ASSERT_SIZE(IJournalManager, 0x58);
} // namespace game
using IJournalManager = game::IJournalManager;
} // namespace RED4ext
