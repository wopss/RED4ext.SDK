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
struct HostileThreatDetected : AI::AIEvent
{
    static constexpr const char* NAME = "AIHostileThreatDetected";
    static constexpr const char* ALIAS = "HostileThreatDetected";

    WeakHandle<ent::Entity> owner; // 50
    WeakHandle<ent::Entity> threat; // 60
    bool status; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(HostileThreatDetected, 0x78);
} // namespace AI
using AIHostileThreatDetected = AI::HostileThreatDetected;
using HostileThreatDetected = AI::HostileThreatDetected;
} // namespace RED4ext

// clang-format on
