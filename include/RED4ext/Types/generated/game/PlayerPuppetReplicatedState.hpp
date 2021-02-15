#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/PuppetReplicatedState.hpp>

namespace RED4ext
{
namespace game { 
struct PlayerPuppetReplicatedState : game::PuppetReplicatedState
{
    static constexpr const char* NAME = "gamePlayerPuppetReplicatedState";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PlayerPuppetReplicatedState, 0xE8);
} // namespace game
} // namespace RED4ext
