#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/HitInstance.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::projectile
{
struct HitEvent : red::Event
{
    static constexpr const char* NAME = "gameprojectileHitEvent";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::projectile::HitInstance> hitInstances; // 40
};
RED4EXT_ASSERT_SIZE(HitEvent, 0x50);
} // namespace game::projectile
using gameprojectileHitEvent = game::projectile::HitEvent;
} // namespace RED4ext

// clang-format on
