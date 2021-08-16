#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/LaunchEvent.hpp>

namespace RED4ext
{
namespace game::projectile { struct TrajectoryParams; }

namespace game::projectile { 
struct SetUpAndLaunchEvent : game::projectile::LaunchEvent
{
    static constexpr const char* NAME = "gameprojectileSetUpAndLaunchEvent";
    static constexpr const char* ALIAS = NAME;

    Handle<game::projectile::TrajectoryParams> trajectoryParams; // 180
    float lerpMultiplier; // 190
    uint8_t unk194[0x1A0 - 0x194]; // 194
};
RED4EXT_ASSERT_SIZE(SetUpAndLaunchEvent, 0x1A0);
} // namespace game::projectile
} // namespace RED4ext
