#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events
{
struct ReloadLootEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsReloadLootEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ReloadLootEvent, 0x40);
} // namespace game::events
using gameeventsReloadLootEvent = game::events::ReloadLootEvent;
} // namespace RED4ext

// clang-format on
