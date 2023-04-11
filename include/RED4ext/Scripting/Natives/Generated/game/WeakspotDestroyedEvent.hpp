#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct WeakspotDestroyedEvent : red::Event
{
    static constexpr const char* NAME = "gameWeakspotDestroyedEvent";
    static constexpr const char* ALIAS = "WeakspotDestroyedEvent";

};
RED4EXT_ASSERT_SIZE(WeakspotDestroyedEvent, 0x40);
} // namespace game
using gameWeakspotDestroyedEvent = game::WeakspotDestroyedEvent;
using WeakspotDestroyedEvent = game::WeakspotDestroyedEvent;
} // namespace RED4ext

// clang-format on
