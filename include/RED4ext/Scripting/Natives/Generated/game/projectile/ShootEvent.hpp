#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Matrix.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/SetUpEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/WeaponParams.hpp>

namespace RED4ext
{
namespace game::projectile { 
struct ShootEvent : game::projectile::SetUpEvent
{
    static constexpr const char* NAME = "gameprojectileShootEvent";
    static constexpr const char* ALIAS = NAME;

    Matrix localToWorld; // A0
    Vector4 startPoint; // E0
    Vector4 startVelocity; // F0
    Vector4 weaponVelocity; // 100
    game::projectile::WeaponParams params; // 110
};
RED4EXT_ASSERT_SIZE(ShootEvent, 0x1B0);
} // namespace game::projectile
} // namespace RED4ext
