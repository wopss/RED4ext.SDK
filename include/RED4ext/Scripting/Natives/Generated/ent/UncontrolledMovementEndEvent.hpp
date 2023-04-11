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
struct UncontrolledMovementEndEvent : red::Event
{
    static constexpr const char* NAME = "entUncontrolledMovementEndEvent";
    static constexpr const char* ALIAS = "UncontrolledMovementEndEvent";

};
RED4EXT_ASSERT_SIZE(UncontrolledMovementEndEvent, 0x40);
} // namespace ent
using entUncontrolledMovementEndEvent = ent::UncontrolledMovementEndEvent;
using UncontrolledMovementEndEvent = ent::UncontrolledMovementEndEvent;
} // namespace RED4ext

// clang-format on
