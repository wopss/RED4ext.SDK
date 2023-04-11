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
struct RagdollPutToSleepEvent : red::Event
{
    static constexpr const char* NAME = "entRagdollPutToSleepEvent";
    static constexpr const char* ALIAS = "RagdollPutToSleepEvent";

};
RED4EXT_ASSERT_SIZE(RagdollPutToSleepEvent, 0x40);
} // namespace ent
using entRagdollPutToSleepEvent = ent::RagdollPutToSleepEvent;
using RagdollPutToSleepEvent = ent::RagdollPutToSleepEvent;
} // namespace RED4ext

// clang-format on
