#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PrereqState.hpp>

namespace RED4ext
{
namespace game
{
struct PlayerProximityPrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gamePlayerProximityPrereqState";
    static constexpr const char* ALIAS = "PlayerProximityPrereqState";

    uint8_t unk100[0x110 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(PlayerProximityPrereqState, 0x110);
} // namespace game
using gamePlayerProximityPrereqState = game::PlayerProximityPrereqState;
using PlayerProximityPrereqState = game::PlayerProximityPrereqState;
} // namespace RED4ext

// clang-format on
