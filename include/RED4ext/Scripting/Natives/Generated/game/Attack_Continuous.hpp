#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Attack_GameEffect.hpp>

namespace RED4ext
{
namespace game { 
struct Attack_Continuous : game::Attack_GameEffect
{
    static constexpr const char* NAME = "gameAttack_Continuous";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(Attack_Continuous, 0xE8);
} // namespace game
} // namespace RED4ext
