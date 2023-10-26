#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/LaunchParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/WeaponParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::projectile
{
struct __declspec(align(0x10)) SpawnerLaunchEvent : red::Event
{
    static constexpr const char* NAME = "gameprojectileSpawnerLaunchEvent";
    static constexpr const char* ALIAS = NAME;

    game::projectile::LaunchParams launchParams; // 40
    CName templateName; // 98
    CName appearance; // A0
    WeakHandle<game::Object> owner; // A8
    uint8_t unkB8[0xD0 - 0xB8]; // B8
    game::projectile::WeaponParams projectileParams; // D0
    uint8_t unk190[0x1A0 - 0x190]; // 190
};
RED4EXT_ASSERT_SIZE(SpawnerLaunchEvent, 0x1A0);
} // namespace game::projectile
using gameprojectileSpawnerLaunchEvent = game::projectile::SpawnerLaunchEvent;
} // namespace RED4ext

// clang-format on
