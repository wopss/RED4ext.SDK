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
struct AIMountedE3Hack : red::Event
{
    static constexpr const char* NAME = "vehicleAIMountedE3Hack";
    static constexpr const char* ALIAS = "VehicleAIMountedE3Hack";

};
RED4EXT_ASSERT_SIZE(AIMountedE3Hack, 0x40);
} // namespace vehicle
using vehicleAIMountedE3Hack = vehicle::AIMountedE3Hack;
using VehicleAIMountedE3Hack = vehicle::AIMountedE3Hack;
} // namespace RED4ext

// clang-format on
