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
struct DriveTowardsPlayerStrategyRequest : vehicle::BaseStrategyRequest
{
    static constexpr const char* NAME = "vehicleDriveTowardsPlayerStrategyRequest";
    static constexpr const char* ALIAS = "DriveTowardsPlayerStrategyRequest";

};
RED4EXT_ASSERT_SIZE(DriveTowardsPlayerStrategyRequest, 0x58);
} // namespace vehicle
using vehicleDriveTowardsPlayerStrategyRequest = vehicle::DriveTowardsPlayerStrategyRequest;
using DriveTowardsPlayerStrategyRequest = vehicle::DriveTowardsPlayerStrategyRequest;
} // namespace RED4ext

// clang-format on
