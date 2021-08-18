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

    CName mixSettingsName; // 38
    CName combatVoManagerSettingsName; // 40
    float singleConversationMinRepeatTime; // 48
    float allConversationsMinRepeatTime; // 4C
    float maxVelocityMagnitudeToConsiderPlayerVehicleInactive; // 50
    float maxVelocityMagnitudeToConsiderTrafficVehicleIdle; // 54
    float playerInactiveMinTimeNeededToEngageMovingFaster; // 58
    audio::VehicleEngageMovingFasterInterpolationData vehEngageMovingFasterInterpolation; // 5C
    float trafficSpeedRC; // 6C
    float trafficAccelerationRC; // 70
    float trafficRpmRC; // 74
    float overHeadVisibilityMaxOcclusion; // 78
    float overHeadVisibilityMaxObstruction; // 7C
    float conversationMixCooldown; // 80
    float enemyPingCooldown; // 84
    float idleTimeBeforeAllowingOwMusicChange; // 88
    float drivingStreamingAmbientEmittersDistanceRolloff; // 8C
    float lowHealthStateMaxTime; // 90
    uint8_t unk94[0xA8 - 0x94]; // 94
};
RED4EXT_ASSERT_SIZE(DirectorSystemSettings, 0xA8);
} // namespace audio
} // namespace RED4ext
