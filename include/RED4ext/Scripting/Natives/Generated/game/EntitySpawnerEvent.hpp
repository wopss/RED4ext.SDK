#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntitySpawnerEventType.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct EntitySpawnerEvent : red::Event
{
    static constexpr const char* NAME = "gameEntitySpawnerEvent";
    static constexpr const char* ALIAS = NAME;

    ent::EntityID spawnedEntityId; // 40
    game::EntitySpawnerEventType eventType; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(EntitySpawnerEvent, 0x50);
} // namespace game
using gameEntitySpawnerEvent = game::EntitySpawnerEvent;
} // namespace RED4ext

// clang-format on
