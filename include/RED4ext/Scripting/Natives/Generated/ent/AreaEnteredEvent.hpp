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
struct __declspec(align(0x10)) AreaEnteredEvent : ent::TriggerEvent
{
    static constexpr const char* NAME = "entAreaEnteredEvent";
    static constexpr const char* ALIAS = "AreaEnteredEvent";

};
RED4EXT_ASSERT_SIZE(AreaEnteredEvent, 0x80);
} // namespace ent
using entAreaEnteredEvent = ent::AreaEnteredEvent;
using AreaEnteredEvent = ent::AreaEnteredEvent;
} // namespace RED4ext

// clang-format on
