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
struct RagdollNotifyDisabledEvent : red::Event
{
    static constexpr const char* NAME = "entRagdollNotifyDisabledEvent";
    static constexpr const char* ALIAS = "RagdollNotifyDisabledEvent";

};
RED4EXT_ASSERT_SIZE(RagdollNotifyDisabledEvent, 0x40);
} // namespace ent
using entRagdollNotifyDisabledEvent = ent::RagdollNotifyDisabledEvent;
using RagdollNotifyDisabledEvent = ent::RagdollNotifyDisabledEvent;
} // namespace RED4ext

// clang-format on
