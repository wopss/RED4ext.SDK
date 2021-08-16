#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/AI/VehicleCommand.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace AI { 
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
    bool allowStubMovement; // 88
    uint8_t unk89[0x90 - 0x89]; // 89
};
RED4EXT_ASSERT_SIZE(VehicleFollowCommand, 0x90);
} // namespace AI
} // namespace RED4ext
