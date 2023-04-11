#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/VehicleCommand.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace AI
{
struct VehicleFollowCommand : AI::VehicleCommand
{
    static constexpr const char* NAME = "AIVehicleFollowCommand";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<game::Object> target; // 68
    float secureTimeOut; // 78
    float distanceMin; // 7C
    float distanceMax; // 80
    bool stopWhenTargetReached; // 84
    bool useTraffic; // 85
    bool trafficTryNeighborsForStart; // 86
    bool trafficTryNeighborsForEnd; // 87
};
RED4EXT_ASSERT_SIZE(VehicleFollowCommand, 0x88);
} // namespace AI
using AIVehicleFollowCommand = AI::VehicleFollowCommand;
} // namespace RED4ext

// clang-format on
