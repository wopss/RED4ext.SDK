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
struct SetMaxChargeEvent : red::Event
{
    static constexpr const char* NAME = "gameweaponeventsSetMaxChargeEvent";
    static constexpr const char* ALIAS = "WeaponSetMaxChargeEvent";

    float maxCharge; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(SetMaxChargeEvent, 0x48);
} // namespace game::weapon::events
using gameweaponeventsSetMaxChargeEvent = game::weapon::events::SetMaxChargeEvent;
using WeaponSetMaxChargeEvent = game::weapon::events::SetMaxChargeEvent;
} // namespace RED4ext

// clang-format on
