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
struct RagdollDisableEvent : red::Event
{
    static constexpr const char* NAME = "entRagdollDisableEvent";
    static constexpr const char* ALIAS = "RagdollDisableEvent";

};
RED4EXT_ASSERT_SIZE(RagdollDisableEvent, 0x40);
} // namespace ent
using entRagdollDisableEvent = ent::RagdollDisableEvent;
using RagdollDisableEvent = ent::RagdollDisableEvent;
} // namespace RED4ext

// clang-format on
