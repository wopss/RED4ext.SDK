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
struct ToggleRadioReceiverEvent : red::Event
{
    static constexpr const char* NAME = "vehicleToggleRadioReceiverEvent";
    static constexpr const char* ALIAS = "ToggleRadioReceiver";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ToggleRadioReceiverEvent, 0x48);
} // namespace vehicle
using vehicleToggleRadioReceiverEvent = vehicle::ToggleRadioReceiverEvent;
using ToggleRadioReceiver = vehicle::ToggleRadioReceiverEvent;
} // namespace RED4ext

// clang-format on
