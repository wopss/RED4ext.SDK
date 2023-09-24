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
struct ApplyZOffsetFromGroundEvent : red::Event
{
    static constexpr const char* NAME = "vehicleApplyZOffsetFromGroundEvent";
    static constexpr const char* ALIAS = "VehicleApplyZOffsetFromGroundEvent";

};
RED4EXT_ASSERT_SIZE(ApplyZOffsetFromGroundEvent, 0x40);
} // namespace vehicle
using vehicleApplyZOffsetFromGroundEvent = vehicle::ApplyZOffsetFromGroundEvent;
using VehicleApplyZOffsetFromGroundEvent = vehicle::ApplyZOffsetFromGroundEvent;
} // namespace RED4ext

// clang-format on
