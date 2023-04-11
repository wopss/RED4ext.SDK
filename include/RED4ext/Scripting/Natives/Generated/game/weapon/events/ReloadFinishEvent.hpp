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
struct ReloadFinishEvent : red::Event
{
    static constexpr const char* NAME = "gameweaponeventsReloadFinishEvent";
    static constexpr const char* ALIAS = "WeaponReloadFinishEvent";

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ReloadFinishEvent, 0x50);
} // namespace game::weapon::events
using gameweaponeventsReloadFinishEvent = game::weapon::events::ReloadFinishEvent;
using WeaponReloadFinishEvent = game::weapon::events::ReloadFinishEvent;
} // namespace RED4ext

// clang-format on
