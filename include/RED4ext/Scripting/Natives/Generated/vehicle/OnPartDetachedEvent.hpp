#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace vehicle
{
struct OnPartDetachedEvent : red::Event
{
    static constexpr const char* NAME = "vehicleOnPartDetachedEvent";
    static constexpr const char* ALIAS = "VehicleOnPartDetachedEvent";

    CName partName; // 40
};
RED4EXT_ASSERT_SIZE(OnPartDetachedEvent, 0x48);
} // namespace vehicle
using vehicleOnPartDetachedEvent = vehicle::OnPartDetachedEvent;
using VehicleOnPartDetachedEvent = vehicle::OnPartDetachedEvent;
} // namespace RED4ext

// clang-format on
