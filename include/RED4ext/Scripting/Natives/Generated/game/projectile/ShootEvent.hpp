#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Matrix.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/SetUpEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/WeaponParams.hpp>

namespace RED4ext
{
namespace game::projectile
{
struct __declspec(align(0x10)) ShootEvent : game::projectile::SetUpEvent
{
    static constexpr const char* NAME = "gameprojectileShootEvent";
    static constexpr const char* ALIAS = NAME;

    Matrix localToWorld; // B0
    Vector4 startPoint; // F0
    Vector4 startVelocity; // 100
    Vector4 weaponVelocity; // 110
    game::projectile::WeaponParams params; // 120
};
RED4EXT_ASSERT_SIZE(ShootEvent, 0x1E0);
} // namespace game::projectile
using gameprojectileShootEvent = game::projectile::ShootEvent;
} // namespace RED4ext

// clang-format on
