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
struct ThreatUnconscious : AI::AIEvent
{
    static constexpr const char* NAME = "AIThreatUnconscious";
    static constexpr const char* ALIAS = "ThreatUnconscious";

    WeakHandle<ent::Entity> owner; // 50
    WeakHandle<ent::Entity> threat; // 60
    uint32_t id; // 70
    bool detected; // 74
    uint8_t unk75[0x78 - 0x75]; // 75
};
RED4EXT_ASSERT_SIZE(ThreatUnconscious, 0x78);
} // namespace AI
using AIThreatUnconscious = AI::ThreatUnconscious;
using ThreatUnconscious = AI::ThreatUnconscious;
} // namespace RED4ext

// clang-format on
