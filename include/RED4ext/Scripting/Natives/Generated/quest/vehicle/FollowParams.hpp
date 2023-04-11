#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/VehicleSpecificCommandParams.hpp>

namespace RED4ext
{
namespace quest::vehicle
{
struct FollowParams : quest::VehicleSpecificCommandParams
{
    static constexpr const char* NAME = "questvehicleFollowParams";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference targetEntRef; // 38
    float distanceMin; // 70
    float distanceMax; // 74
    bool isPlayer; // 78
    bool stopWhenTargetReached; // 79
    bool useTraffic; // 7A
    bool trafficTryNeighborsForStart; // 7B
    bool trafficTryNeighborsForEnd; // 7C
    uint8_t unk7D[0x80 - 0x7D]; // 7D
};
RED4EXT_ASSERT_SIZE(FollowParams, 0x80);
} // namespace quest::vehicle
using questvehicleFollowParams = quest::vehicle::FollowParams;
} // namespace RED4ext

// clang-format on
