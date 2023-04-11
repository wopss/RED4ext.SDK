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
struct SpawnerAttachExistingEvent : red::Event
{
    static constexpr const char* NAME = "gameprojectileSpawnerAttachExistingEvent";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<game::Object> projectile; // 40
    WeakHandle<game::Object> owner; // 50
};
RED4EXT_ASSERT_SIZE(SpawnerAttachExistingEvent, 0x60);
} // namespace game::projectile
using gameprojectileSpawnerAttachExistingEvent = game::projectile::SpawnerAttachExistingEvent;
} // namespace RED4ext

// clang-format on
