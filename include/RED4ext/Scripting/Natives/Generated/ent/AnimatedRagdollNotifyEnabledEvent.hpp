#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct AnimatedRagdollNotifyEnabledEvent : red::Event
{
    static constexpr const char* NAME = "entAnimatedRagdollNotifyEnabledEvent";
    static constexpr const char* ALIAS = "AnimatedRagdollNotifyEnabledEvent";

    ent::EntityID instigator; // 40
};
RED4EXT_ASSERT_SIZE(AnimatedRagdollNotifyEnabledEvent, 0x48);
} // namespace ent
using entAnimatedRagdollNotifyEnabledEvent = ent::AnimatedRagdollNotifyEnabledEvent;
using AnimatedRagdollNotifyEnabledEvent = ent::AnimatedRagdollNotifyEnabledEvent;
} // namespace RED4ext

// clang-format on
