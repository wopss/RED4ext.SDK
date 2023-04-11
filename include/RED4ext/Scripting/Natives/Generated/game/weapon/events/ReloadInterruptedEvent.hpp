#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::weapon::events
{
struct ReloadInterruptedEvent : red::Event
{
    static constexpr const char* NAME = "gameweaponeventsReloadInterruptedEvent";
    static constexpr const char* ALIAS = "WeaponReloadInterruptedEvent";

};
RED4EXT_ASSERT_SIZE(ReloadInterruptedEvent, 0x40);
} // namespace game::weapon::events
using gameweaponeventsReloadInterruptedEvent = game::weapon::events::ReloadInterruptedEvent;
using WeaponReloadInterruptedEvent = game::weapon::events::ReloadInterruptedEvent;
} // namespace RED4ext

// clang-format on
