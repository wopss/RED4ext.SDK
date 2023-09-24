#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleDoorsSettingsMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleInteriorParameterData.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleTemperatureSettings.hpp>

namespace RED4ext
{
namespace audio
{
struct VehicleGeneralData
{
    static constexpr const char* NAME = "audioVehicleGeneralData";
    static constexpr const char* ALIAS = NAME;

    CName revSoundbankName; // 00
    CName revElectricSoundbankName; // 08
    CName reverbSoundbankName; // 10
    CName enterVehicleEvent; // 18
    CName exitVehicleEvent; // 20
    CName ignitionStartEvent; // 28
    CName ignitionEndEvent; // 30
    CName UIStartEvent; // 38
    CName UIEndEvent; // 40
    CName hornOnEvent; // 48
    CName hornOffEvent; // 50
    CName policeHornOnEvent; // 58
    CName policeHornOffEvent; // 60
    CName trafficPanicHornOnEvent; // 68
    CName trafficPanicHornOffEvent; // 70
    CName sirenOnEvent; // 78
    CName sirenOffEvent; // 80
    CName rainStartEvent; // 88
    CName rainStopEvent; // 90
    CName waterStartEvent; // 98
    CName waterStopEvent; // A0
    CName tyreBurstEvent; // A8
    CName collisionSoundEvent; // B0
    CName brakeApplyEvent; // B8
    CName brakeReleaseEvent; // C0
    CName handbrakeApplyEvent; // C8
    CName handbrakeReleaseEvent; // D0
    CName brakeLoopStartEvent; // D8
    CName brakeLoopEndEvent; // E0
    CName lightsOnEvent; // E8
    CName lightsOffEvent; // F0
    CName interiorReverbBus; // F8
    CName skid; // 100
    CName inclination; // 108
    CName impactVelocity; // 110
    CName dopplerShift; // 118
    CName acoustingIsolationFactor; // 120
    CName impactGridCellRawChange; // 128
    audio::VehicleDoorsSettingsMetadata vehicleDoorsSettings; // 130
    audio::VehicleInteriorParameterData vehicleInteriorParameterData; // 160
    audio::VehicleTemperatureSettings vehicleTemperatureSettings; // 178
    uint8_t unk184[0x188 - 0x184]; // 184
};
RED4EXT_ASSERT_SIZE(VehicleGeneralData, 0x188);
} // namespace audio
using audioVehicleGeneralData = audio::VehicleGeneralData;
} // namespace RED4ext

// clang-format on
