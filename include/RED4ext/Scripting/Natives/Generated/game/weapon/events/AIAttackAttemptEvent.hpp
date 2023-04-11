#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EContinuousMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::weapon::events
{
struct AIAttackAttemptEvent : red::Event
{
    static constexpr const char* NAME = "gameweaponeventsAIAttackAttemptEvent";
    static constexpr const char* ALIAS = "AIAttackAttemptEvent";

    WeakHandle<game::Object> instigator; // 40
    WeakHandle<game::Object> target; // 50
    bool isWindUp; // 60
    uint8_t unk61[0x64 - 0x61]; // 61
    game::EContinuousMode continuousMode; // 64
    float minimumOpacity; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(AIAttackAttemptEvent, 0x70);
} // namespace game::weapon::events
using gameweaponeventsAIAttackAttemptEvent = game::weapon::events::AIAttackAttemptEvent;
using AIAttackAttemptEvent = game::weapon::events::AIAttackAttemptEvent;
} // namespace RED4ext

// clang-format on
