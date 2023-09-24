#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CoverInstance.hpp>

namespace RED4ext
{
namespace game
{
struct ShootingSpotInstance : game::CoverInstance
{
    static constexpr const char* NAME = "gameShootingSpotInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ShootingSpotInstance, 0x108);
} // namespace game
using gameShootingSpotInstance = game::ShootingSpotInstance;
} // namespace RED4ext

// clang-format on
