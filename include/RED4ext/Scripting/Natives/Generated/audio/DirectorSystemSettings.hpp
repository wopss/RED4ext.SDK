#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleEngageMovingFasterInterpolationData.hpp>

namespace RED4ext
{
namespace audio { 
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
    float trafficSpeedRC; // 64
    float trafficAccelerationRC; // 68
    float trafficRpmRC; // 6C
    float trafficSlipRatioSkidThreshold; // 70
    float trafficHornSingleVehicleCooldown; // 74
    float trafficHornAllVehiclesCooldown; // 78
    float trafficHornMaxDistanceRangeToPlayer; // 7C
    float overHeadVisibilityMaxOcclusion; // 80
    float overHeadVisibilityMaxObstruction; // 84
    float conversationMixCooldown; // 88
    float enemyPingCooldown; // 8C
    float idleTimeBeforeAllowingOwMusicChange; // 90
    float drivingStreamingAmbientEmittersDistanceRolloff; // 94
    float lowHealthStateMaxTime; // 98
    float lowGearMaxTrafficSpeed; // 9C
    float lowGearAccelerationThreshold; // A0
    float mediumGearMaxTrafficSpeed; // A4
    float mediumGearAccelerationThreshold; // A8
    float highGearAccelerationThreshold; // AC
    uint8_t unkB0[0xB8 - 0xB0]; // B0
};
RED4EXT_ASSERT_SIZE(DirectorSystemSettings, 0xB8);
} // namespace audio
} // namespace RED4ext
