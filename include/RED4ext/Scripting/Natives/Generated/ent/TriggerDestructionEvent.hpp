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
struct TriggerDestructionEvent : red::Event
{
    static constexpr const char* NAME = "entTriggerDestructionEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TriggerDestructionEvent, 0x40);
} // namespace ent
using entTriggerDestructionEvent = ent::TriggerDestructionEvent;
} // namespace RED4ext

// clang-format on
