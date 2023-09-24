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
struct InterceptAtNextIntersectionStrategyRequest : vehicle::BaseStrategyRequest
{
    static constexpr const char* NAME = "vehicleInterceptAtNextIntersectionStrategyRequest";
    static constexpr const char* ALIAS = "InterceptAtNextIntersectionStrategyRequest";

    float distancesToIntersectionRatio; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(InterceptAtNextIntersectionStrategyRequest, 0x60);
} // namespace vehicle
using vehicleInterceptAtNextIntersectionStrategyRequest = vehicle::InterceptAtNextIntersectionStrategyRequest;
using InterceptAtNextIntersectionStrategyRequest = vehicle::InterceptAtNextIntersectionStrategyRequest;
} // namespace RED4ext

// clang-format on
