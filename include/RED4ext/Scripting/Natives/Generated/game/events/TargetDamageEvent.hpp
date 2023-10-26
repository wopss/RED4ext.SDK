#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/events/TargetHitEvent.hpp>

namespace RED4ext
{
namespace game::events
{
struct __declspec(align(0x10)) TargetDamageEvent : game::events::TargetHitEvent
{
    static constexpr const char* NAME = "gameeventsTargetDamageEvent";
    static constexpr const char* ALIAS = "gameTargetDamageEvent";

    float damage; // 100
    uint8_t unk104[0x110 - 0x104]; // 104
};
RED4EXT_ASSERT_SIZE(TargetDamageEvent, 0x110);
} // namespace game::events
using gameeventsTargetDamageEvent = game::events::TargetDamageEvent;
using gameTargetDamageEvent = game::events::TargetDamageEvent;
} // namespace RED4ext

// clang-format on
