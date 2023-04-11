#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::projectile
{
struct SpawnerAttachEvent : red::Event
{
    static constexpr const char* NAME = "gameprojectileSpawnerAttachEvent";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<game::Object> owner; // 40
};
RED4EXT_ASSERT_SIZE(SpawnerAttachEvent, 0x50);
} // namespace game::projectile
using gameprojectileSpawnerAttachEvent = game::projectile::SpawnerAttachEvent;
} // namespace RED4ext

// clang-format on
