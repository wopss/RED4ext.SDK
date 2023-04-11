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
struct ThreatExpectationInvalid : AI::AIEvent
{
    static constexpr const char* NAME = "AIThreatExpectationInvalid";
    static constexpr const char* ALIAS = "ThreatExpectationInvalid";

    WeakHandle<ent::Entity> owner; // 50
    WeakHandle<ent::Entity> threat; // 60
    uint32_t threatId; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(ThreatExpectationInvalid, 0x78);
} // namespace AI
using AIThreatExpectationInvalid = AI::ThreatExpectationInvalid;
using ThreatExpectationInvalid = AI::ThreatExpectationInvalid;
} // namespace RED4ext

// clang-format on
