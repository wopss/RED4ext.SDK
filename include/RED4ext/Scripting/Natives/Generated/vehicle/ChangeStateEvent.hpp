#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/EState.hpp>

namespace RED4ext
{
namespace vehicle
{
struct ChangeStateEvent : red::Event
{
    static constexpr const char* NAME = "vehicleChangeStateEvent";
    static constexpr const char* ALIAS = NAME;

    vehicle::EState newState; // 40
    vehicle::EState oldState; // 44
    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ChangeStateEvent, 0x50);
} // namespace vehicle
using vehicleChangeStateEvent = vehicle::ChangeStateEvent;
} // namespace RED4ext

// clang-format on
