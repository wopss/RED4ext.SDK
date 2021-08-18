#pragma once

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

namespace game::projectile { 
struct SpawnerLaunchEvent : red::Event
{
    static constexpr const char* NAME = "gameprojectileSpawnerLaunchEvent";
    static constexpr const char* ALIAS = NAME;

    game::projectile::LaunchParams launchParams; // 40
    CName templateName; // 98
    WeakHandle<game::Object> owner; // A0
    uint8_t unkB0[0xC0 - 0xB0]; // B0
    game::projectile::WeaponParams projectileParams; // C0
    uint8_t unk160[0x170 - 0x160]; // 160
};
RED4EXT_ASSERT_SIZE(SpawnerLaunchEvent, 0x170);
} // namespace game::projectile
} // namespace RED4ext
