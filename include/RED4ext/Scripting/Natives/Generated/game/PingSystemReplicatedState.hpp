#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystemReplicatedState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PingEntry.hpp>

namespace RED4ext
{
namespace game
{
struct PingSystemReplicatedState : game::IGameSystemReplicatedState
{
    static constexpr const char* NAME = "gamePingSystemReplicatedState";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::PingEntry> replicatedPingEntries; // 40
};
RED4EXT_ASSERT_SIZE(PingSystemReplicatedState, 0x50);
} // namespace game
using gamePingSystemReplicatedState = game::PingSystemReplicatedState;
} // namespace RED4ext

// clang-format on
