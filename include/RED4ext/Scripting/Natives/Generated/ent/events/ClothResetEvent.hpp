#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent::events
{
struct ClothResetEvent : red::Event
{
    static constexpr const char* NAME = "enteventsClothResetEvent";
    static constexpr const char* ALIAS = "ClothResetEvent";

};
RED4EXT_ASSERT_SIZE(ClothResetEvent, 0x40);
} // namespace ent::events
using enteventsClothResetEvent = ent::events::ClothResetEvent;
using ClothResetEvent = ent::events::ClothResetEvent;
} // namespace RED4ext

// clang-format on
