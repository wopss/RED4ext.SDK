#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/LaunchParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/WeaponParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::projectile
{
struct __declspec(align(0x10)) LaunchEvent : red::Event
{
    static constexpr const char* NAME = "gameprojectileLaunchEvent";
    static constexpr const char* ALIAS = NAME;

    game::projectile::LaunchParams launchParams; // 40
    WeakHandle<game::Object> owner; // 98
    WeakHandle<game::Object> weapon; // A8
    uint8_t unkB8[0xC0 - 0xB8]; // B8
    game::projectile::WeaponParams projectileParams; // C0
    uint8_t unk180[0x1A0 - 0x180]; // 180
};
RED4EXT_ASSERT_SIZE(LaunchEvent, 0x1A0);
} // namespace game::projectile
using gameprojectileLaunchEvent = game::projectile::LaunchEvent;
} // namespace RED4ext

// clang-format on
