#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/BaseStrategyRequest.hpp>

namespace RED4ext
{
namespace vehicle
{
struct DriveAwayFromPlayerStrategyRequest : vehicle::BaseStrategyRequest
{
    static constexpr const char* NAME = "vehicleDriveAwayFromPlayerStrategyRequest";
    static constexpr const char* ALIAS = "DriveAwayFromPlayerStrategyRequest";

};
RED4EXT_ASSERT_SIZE(DriveAwayFromPlayerStrategyRequest, 0x58);
} // namespace vehicle
using vehicleDriveAwayFromPlayerStrategyRequest = vehicle::DriveAwayFromPlayerStrategyRequest;
using DriveAwayFromPlayerStrategyRequest = vehicle::DriveAwayFromPlayerStrategyRequest;
} // namespace RED4ext

// clang-format on
