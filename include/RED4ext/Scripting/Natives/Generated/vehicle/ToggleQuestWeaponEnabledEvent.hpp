#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct ToggleQuestWeaponEnabledEvent : red::Event
{
    static constexpr const char* NAME = "vehicleToggleQuestWeaponEnabledEvent";
    static constexpr const char* ALIAS = "VehicleToggleQuestWeaponEnabledEvent";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ToggleQuestWeaponEnabledEvent, 0x48);
} // namespace vehicle
using vehicleToggleQuestWeaponEnabledEvent = vehicle::ToggleQuestWeaponEnabledEvent;
using VehicleToggleQuestWeaponEnabledEvent = vehicle::ToggleQuestWeaponEnabledEvent;
} // namespace RED4ext

// clang-format on
