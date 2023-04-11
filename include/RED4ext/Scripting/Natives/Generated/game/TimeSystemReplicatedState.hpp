#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/GameTime.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystemReplicatedState.hpp>

namespace RED4ext
{
namespace game
{
struct TimeSystemReplicatedState : game::IGameSystemReplicatedState
{
    static constexpr const char* NAME = "gameTimeSystemReplicatedState";
    static constexpr const char* ALIAS = NAME;

    bool paused; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    GameTime gameTime; // 44
};
RED4EXT_ASSERT_SIZE(TimeSystemReplicatedState, 0x48);
} // namespace game
using gameTimeSystemReplicatedState = game::TimeSystemReplicatedState;
} // namespace RED4ext

// clang-format on
