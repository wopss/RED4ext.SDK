#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct AnimatedRagdollNotifyDisabledEvent : red::Event
{
    static constexpr const char* NAME = "entAnimatedRagdollNotifyDisabledEvent";
    static constexpr const char* ALIAS = "AnimatedRagdollNotifyDisabledEvent";

};
RED4EXT_ASSERT_SIZE(AnimatedRagdollNotifyDisabledEvent, 0x40);
} // namespace ent
using entAnimatedRagdollNotifyDisabledEvent = ent::AnimatedRagdollNotifyDisabledEvent;
using AnimatedRagdollNotifyDisabledEvent = ent::AnimatedRagdollNotifyDisabledEvent;
} // namespace RED4ext

// clang-format on
