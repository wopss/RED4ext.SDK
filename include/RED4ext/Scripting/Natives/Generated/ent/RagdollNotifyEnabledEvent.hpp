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
struct RagdollNotifyEnabledEvent : red::Event
{
    static constexpr const char* NAME = "entRagdollNotifyEnabledEvent";
    static constexpr const char* ALIAS = "RagdollNotifyEnabledEvent";

    ent::EntityID instigator; // 40
};
RED4EXT_ASSERT_SIZE(RagdollNotifyEnabledEvent, 0x48);
} // namespace ent
using entRagdollNotifyEnabledEvent = ent::RagdollNotifyEnabledEvent;
using RagdollNotifyEnabledEvent = ent::RagdollNotifyEnabledEvent;
} // namespace RED4ext

// clang-format on
