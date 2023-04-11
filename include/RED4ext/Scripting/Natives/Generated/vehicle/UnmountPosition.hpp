#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldPosition.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/ExitDirection.hpp>

namespace RED4ext
{
namespace vehicle
{
struct UnmountPosition
{
    static constexpr const char* NAME = "vehicleUnmountPosition";
    static constexpr const char* ALIAS = NAME;

    vehicle::ExitDirection direction; // 00
    WorldPosition position; // 04
};
RED4EXT_ASSERT_SIZE(UnmountPosition, 0x10);
} // namespace vehicle
using vehicleUnmountPosition = vehicle::UnmountPosition;
} // namespace RED4ext

// clang-format on
