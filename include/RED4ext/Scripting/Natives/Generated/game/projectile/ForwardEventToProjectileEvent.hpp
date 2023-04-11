#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace red { struct Event; }

namespace game::projectile
{
struct ForwardEventToProjectileEvent : red::Event
{
    static constexpr const char* NAME = "gameprojectileForwardEventToProjectileEvent";
    static constexpr const char* ALIAS = "ForwardEventToProjectileEvent";

    Handle<red::Event> eventToForward; // 40
};
RED4EXT_ASSERT_SIZE(ForwardEventToProjectileEvent, 0x50);
} // namespace game::projectile
using gameprojectileForwardEventToProjectileEvent = game::projectile::ForwardEventToProjectileEvent;
using ForwardEventToProjectileEvent = game::projectile::ForwardEventToProjectileEvent;
} // namespace RED4ext

// clang-format on
