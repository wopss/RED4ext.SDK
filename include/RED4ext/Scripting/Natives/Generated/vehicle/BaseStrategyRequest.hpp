#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/vehicle/PoliceStrategy.hpp>

namespace RED4ext
{
namespace vehicle
{
struct BaseStrategyRequest : IScriptable
{
    static constexpr const char* NAME = "vehicleBaseStrategyRequest";
    static constexpr const char* ALIAS = "BaseStrategyRequest";

    vehicle::PoliceStrategy strategy; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    Vector2 distanceRange; // 44
    float minDirectDistance; // 4C
    bool forceArriveFromBehind; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(BaseStrategyRequest, 0x58);
} // namespace vehicle
using vehicleBaseStrategyRequest = vehicle::BaseStrategyRequest;
using BaseStrategyRequest = vehicle::BaseStrategyRequest;
} // namespace RED4ext

// clang-format on
