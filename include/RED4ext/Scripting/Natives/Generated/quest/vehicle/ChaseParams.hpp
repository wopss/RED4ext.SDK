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
struct ChaseParams : quest::VehicleSpecificCommandParams
{
    static constexpr const char* NAME = "questvehicleChaseParams";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference targetEntRef; // 38
    bool isPlayer; // 70
    uint8_t unk71[0x74 - 0x71]; // 71
    float distanceMin; // 74
    float distanceMax; // 78
    float forceStartSpeed; // 7C
    bool aggressiveRammingEnabled; // 80
    bool ignoreChaseVehiclesLimit; // 81
    bool boostDrivingStats; // 82
    uint8_t unk83[0x88 - 0x83]; // 83
};
RED4EXT_ASSERT_SIZE(ChaseParams, 0x88);
} // namespace quest::vehicle
using questvehicleChaseParams = quest::vehicle::ChaseParams;
} // namespace RED4ext

// clang-format on
