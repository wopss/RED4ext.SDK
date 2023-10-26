#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/LaunchEvent.hpp>

namespace RED4ext
{
namespace game::projectile { struct TrajectoryParams; }

namespace game::projectile
{
struct __declspec(align(0x10)) SetUpAndLaunchEvent : game::projectile::LaunchEvent
{
    static constexpr const char* NAME = "gameprojectileSetUpAndLaunchEvent";
    static constexpr const char* ALIAS = NAME;

    Handle<game::projectile::TrajectoryParams> trajectoryParams; // 1A0
    float lerpMultiplier; // 1B0
    uint8_t unk1B4[0x1C0 - 0x1B4]; // 1B4
};
RED4EXT_ASSERT_SIZE(SetUpAndLaunchEvent, 0x1C0);
} // namespace game::projectile
using gameprojectileSetUpAndLaunchEvent = game::projectile::SetUpAndLaunchEvent;
} // namespace RED4ext

// clang-format on
