#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/LinearMovementEvent.hpp>

namespace RED4ext
{
namespace game::projectile { 
struct AcceleratedMovementEvent : game::projectile::LinearMovementEvent
{
    static constexpr const char* NAME = "gameprojectileAcceleratedMovementEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AcceleratedMovementEvent, 0x50);
} // namespace game::projectile
} // namespace RED4ext
