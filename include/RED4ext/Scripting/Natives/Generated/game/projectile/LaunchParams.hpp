#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/ELaunchMode.hpp>

namespace RED4ext
{
namespace ent { struct IOrientationProvider; }
namespace ent { struct IPositionProvider; }
namespace ent { struct IVelocityProvider; }

namespace game::projectile
{
struct LaunchParams
{
    static constexpr const char* NAME = "gameprojectileLaunchParams";
    static constexpr const char* ALIAS = NAME;

    game::projectile::ELaunchMode launchMode; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    Handle<ent::IPositionProvider> logicalPositionProvider; // 08
    Handle<ent::IOrientationProvider> logicalOrientationProvider; // 18
    Handle<ent::IPositionProvider> visualPositionProvider; // 28
    Handle<ent::IOrientationProvider> visualOrientationProvider; // 38
    Handle<ent::IVelocityProvider> ownerVelocityProvider; // 48
};
RED4EXT_ASSERT_SIZE(LaunchParams, 0x58);
} // namespace game::projectile
using gameprojectileLaunchParams = game::projectile::LaunchParams;
} // namespace RED4ext

// clang-format on
