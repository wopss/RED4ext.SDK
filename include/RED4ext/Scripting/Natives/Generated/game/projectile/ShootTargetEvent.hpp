#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/ShootEvent.hpp>

namespace RED4ext
{
namespace game::projectile
{
struct __declspec(align(0x10)) ShootTargetEvent : game::projectile::ShootEvent
{
    static constexpr const char* NAME = "gameprojectileShootTargetEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ShootTargetEvent, 0x1E0);
} // namespace game::projectile
using gameprojectileShootTargetEvent = game::projectile::ShootTargetEvent;
} // namespace RED4ext

// clang-format on
