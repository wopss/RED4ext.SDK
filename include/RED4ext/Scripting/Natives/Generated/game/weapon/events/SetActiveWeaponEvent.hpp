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
struct SetActiveWeaponEvent : red::Event
{
    static constexpr const char* NAME = "gameweaponeventsSetActiveWeaponEvent";
    static constexpr const char* ALIAS = "SetActiveWeaponEvent";

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(SetActiveWeaponEvent, 0x58);
} // namespace game::weapon::events
using gameweaponeventsSetActiveWeaponEvent = game::weapon::events::SetActiveWeaponEvent;
using SetActiveWeaponEvent = game::weapon::events::SetActiveWeaponEvent;
} // namespace RED4ext

// clang-format on
