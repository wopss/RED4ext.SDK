#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/TriggerEvent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) AreaExitedEvent : ent::TriggerEvent
{
    static constexpr const char* NAME = "entAreaExitedEvent";
    static constexpr const char* ALIAS = "AreaExitedEvent";

};
RED4EXT_ASSERT_SIZE(AreaExitedEvent, 0x80);
} // namespace ent
using entAreaExitedEvent = ent::AreaExitedEvent;
using AreaExitedEvent = ent::AreaExitedEvent;
} // namespace RED4ext

// clang-format on
