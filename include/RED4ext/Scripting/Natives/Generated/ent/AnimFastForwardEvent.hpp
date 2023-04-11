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
struct AnimFastForwardEvent : red::Event
{
    static constexpr const char* NAME = "entAnimFastForwardEvent";
    static constexpr const char* ALIAS = "AnimFastForwardEvent";

};
RED4EXT_ASSERT_SIZE(AnimFastForwardEvent, 0x40);
} // namespace ent
using entAnimFastForwardEvent = ent::AnimFastForwardEvent;
using AnimFastForwardEvent = ent::AnimFastForwardEvent;
} // namespace RED4ext

// clang-format on
