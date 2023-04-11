#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PuppetReplicatedState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/WeaponsReplicatedState.hpp>

namespace RED4ext
{
namespace game
{
struct NpcPuppetReplicatedState : game::PuppetReplicatedState
{
    static constexpr const char* NAME = "gameNpcPuppetReplicatedState";
    static constexpr const char* ALIAS = NAME;

    game::WeaponsReplicatedState weaponStates; // E8
};
RED4EXT_ASSERT_SIZE(NpcPuppetReplicatedState, 0x100);
} // namespace game
using gameNpcPuppetReplicatedState = game::NpcPuppetReplicatedState;
} // namespace RED4ext

// clang-format on
