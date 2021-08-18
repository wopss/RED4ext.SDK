#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CoverDefinition.hpp>

namespace RED4ext
{
namespace game { 
struct ShootingSpotDefinition : game::CoverDefinition
{
    static constexpr const char* NAME = "gameShootingSpotDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ShootingSpotDefinition, 0xA8);
} // namespace game
} // namespace RED4ext
