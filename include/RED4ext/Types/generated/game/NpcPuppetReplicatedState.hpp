#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/PuppetReplicatedState.hpp>
#include <RED4ext/Types/generated/game/WeaponsReplicatedState.hpp>

namespace RED4ext
{
namespace game { 
struct NpcPuppetReplicatedState : game::PuppetReplicatedState
{
    static constexpr const char* NAME = "gameNpcPuppetReplicatedState";
    static constexpr const char* ALIAS = NAME;

    game::WeaponsReplicatedState weaponStates; // E8
};
RED4EXT_ASSERT_SIZE(NpcPuppetReplicatedState, 0x100);
} // namespace game
} // namespace RED4ext
