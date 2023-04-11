#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace AI
{
struct EntityLost : AI::AIEvent
{
    static constexpr const char* NAME = "AIEntityLost";
    static constexpr const char* ALIAS = "EntityLost";

    WeakHandle<ent::Entity> spotter; // 50
    WeakHandle<ent::Entity> spotted; // 60
    bool isHostile; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(EntityLost, 0x78);
} // namespace AI
using AIEntityLost = AI::EntityLost;
using EntityLost = AI::EntityLost;
} // namespace RED4ext

// clang-format on
