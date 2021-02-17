#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ent/EntityID.hpp>
#include <RED4ext/Types/generated/game/EntitySpawnerEventType.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace game { 
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
} // namespace RED4ext
