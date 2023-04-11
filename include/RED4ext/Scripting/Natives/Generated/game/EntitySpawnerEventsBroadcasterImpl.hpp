#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEntitySpawnerEventsBroadcaster.hpp>

namespace RED4ext
{
namespace game
{
struct EntitySpawnerEventsBroadcasterImpl : game::IEntitySpawnerEventsBroadcaster
{
    static constexpr const char* NAME = "gameEntitySpawnerEventsBroadcasterImpl";
    static constexpr const char* ALIAS = "EntitySpawnerEventsBroadcaster";

    uint8_t unk48[0x80 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(EntitySpawnerEventsBroadcasterImpl, 0x80);
} // namespace game
using gameEntitySpawnerEventsBroadcasterImpl = game::EntitySpawnerEventsBroadcasterImpl;
using EntitySpawnerEventsBroadcaster = game::EntitySpawnerEventsBroadcasterImpl;
} // namespace RED4ext

// clang-format on
