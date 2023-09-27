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
struct GetToPlayerFromAnywhereStrategyRequest : vehicle::BaseStrategyRequest
{
    static constexpr const char* NAME = "vehicleGetToPlayerFromAnywhereStrategyRequest";
    static constexpr const char* ALIAS = "GetToPlayerFromAnywhereStrategyRequest";

};
RED4EXT_ASSERT_SIZE(GetToPlayerFromAnywhereStrategyRequest, 0x58);
} // namespace vehicle
using vehicleGetToPlayerFromAnywhereStrategyRequest = vehicle::GetToPlayerFromAnywhereStrategyRequest;
using GetToPlayerFromAnywhereStrategyRequest = vehicle::GetToPlayerFromAnywhereStrategyRequest;
} // namespace RED4ext

// clang-format on
