#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/SummonState.hpp>

namespace RED4ext
{
namespace vehicle
{
struct SummonStartedEvent : red::Event
{
    static constexpr const char* NAME = "vehicleSummonStartedEvent";
    static constexpr const char* ALIAS = "SummonStartedEvent";

    vehicle::SummonState state; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(SummonStartedEvent, 0x48);
} // namespace vehicle
using vehicleSummonStartedEvent = vehicle::SummonStartedEvent;
using SummonStartedEvent = vehicle::SummonStartedEvent;
} // namespace RED4ext

// clang-format on
