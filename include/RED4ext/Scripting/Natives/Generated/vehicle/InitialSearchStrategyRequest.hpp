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
struct InitialSearchStrategyRequest : vehicle::BaseStrategyRequest
{
    static constexpr const char* NAME = "vehicleInitialSearchStrategyRequest";
    static constexpr const char* ALIAS = "InitialSearchStrategyRequest";

};
RED4EXT_ASSERT_SIZE(InitialSearchStrategyRequest, 0x58);
} // namespace vehicle
using vehicleInitialSearchStrategyRequest = vehicle::InitialSearchStrategyRequest;
using InitialSearchStrategyRequest = vehicle::InitialSearchStrategyRequest;
} // namespace RED4ext

// clang-format on
