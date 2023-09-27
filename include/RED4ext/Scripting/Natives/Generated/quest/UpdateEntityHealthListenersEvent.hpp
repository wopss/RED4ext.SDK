#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace quest
{
struct UpdateEntityHealthListenersEvent : red::Event
{
    static constexpr const char* NAME = "questUpdateEntityHealthListenersEvent";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference entityRef; // 40
};
RED4EXT_ASSERT_SIZE(UpdateEntityHealthListenersEvent, 0x78);
} // namespace quest
using questUpdateEntityHealthListenersEvent = quest::UpdateEntityHealthListenersEvent;
} // namespace RED4ext

// clang-format on
