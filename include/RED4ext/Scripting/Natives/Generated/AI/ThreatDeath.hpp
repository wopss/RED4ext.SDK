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
struct ThreatDeath : AI::AIEvent
{
    static constexpr const char* NAME = "AIThreatDeath";
    static constexpr const char* ALIAS = "ThreatDeath";

    WeakHandle<ent::Entity> owner; // 50
    WeakHandle<ent::Entity> threat; // 60
    uint32_t id; // 70
    bool detected; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
};
RED4EXT_ASSERT_SIZE(ThreatDeath, 0x78);
} // namespace AI
using AIThreatDeath = AI::ThreatDeath;
using ThreatDeath = AI::ThreatDeath;
} // namespace RED4ext

// clang-format on
