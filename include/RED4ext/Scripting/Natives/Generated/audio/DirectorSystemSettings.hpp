#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleEngageMovingFasterInterpolationData.hpp>

namespace RED4ext
{
namespace audio
{
struct DirectorSystemSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioDirectorSystemSettings";
    static constexpr const char* ALIAS = NAME;

    CName combatVoManagerSettingsName; // 38
    float singleConversationMinRepeatTime; // 40
    float allConversationsMinRepeatTime; // 44
    float maxVelocityMagnitudeToConsiderPlayerVehicleInactive; // 48
    float maxVelocityMagnitudeToConsiderTrafficVehicleIdle; // 4C
    float playerInactiveMinTimeNeededToEngageMovingFaster; // 50
    audio::VehicleEngageMovingFasterInterpolationData vehEngageMovingFasterInterpolation; // 54
    float playerBrakeEventCooldown; // 64
    float trafficSpeedRC; // 68
    float trafficAccelerationRC; // 6C
    float trafficRpmRC; // 70
    float trafficSlipRatioSkidThreshold; // 74
    float trafficHornSingleVehicleCooldown; // 78
    float trafficHornAllVehiclesCooldown; // 7C
    float trafficHornMaxDistanceRangeToPlayer; // 80
    float overHeadVisibilityMaxOcclusion; // 84
    float overHeadVisibilityMaxObstruction; // 88
    float conversationMixCooldown; // 8C
    float enemyPingCooldown; // 90
    float idleTimeBeforeAllowingOwMusicChange; // 94
    float drivingStreamingAmbientEmittersDistanceRolloff; // 98
    float lowHealthStateMaxTime; // 9C
    float lowGearMaxTrafficSpeed; // A0
    float lowGearAccelerationThreshold; // A4
    float mediumGearMaxTrafficSpeed; // A8
    float mediumGearAccelerationThreshold; // AC
    float highGearAccelerationThreshold; // B0
    uint8_t unkB4[0xC0 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(DirectorSystemSettings, 0xC0);
} // namespace audio
using audioDirectorSystemSettings = audio::DirectorSystemSettings;
} // namespace RED4ext

// clang-format on
