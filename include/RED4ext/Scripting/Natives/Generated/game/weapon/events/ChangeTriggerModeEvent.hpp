#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/TriggerMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::weapon::events
{
struct ChangeTriggerModeEvent : red::Event
{
    static constexpr const char* NAME = "gameweaponeventsChangeTriggerModeEvent";
    static constexpr const char* ALIAS = "WeaponChangeTriggerModeEvent";

    game::data::TriggerMode triggerMode; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(ChangeTriggerModeEvent, 0x48);
} // namespace game::weapon::events
using gameweaponeventsChangeTriggerModeEvent = game::weapon::events::ChangeTriggerModeEvent;
using WeaponChangeTriggerModeEvent = game::weapon::events::ChangeTriggerModeEvent;
} // namespace RED4ext

// clang-format on
