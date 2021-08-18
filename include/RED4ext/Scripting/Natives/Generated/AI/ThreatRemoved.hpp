#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace AI { 
struct ThreatRemoved : AI::AIEvent
{
    static constexpr const char* NAME = "AIThreatRemoved";
    static constexpr const char* ALIAS = "ThreatRemoved";

    WeakHandle<ent::Entity> owner; // 50
    WeakHandle<ent::Entity> threat; // 60
    bool isHostile; // 70
    bool isEnemy; // 71
    bool isDead; // 72
    uint8_t unk73[0x78 - 0x73]; // 73
};
RED4EXT_ASSERT_SIZE(ThreatRemoved, 0x78);
} // namespace AI
using ThreatRemoved = AI::ThreatRemoved;
} // namespace RED4ext
