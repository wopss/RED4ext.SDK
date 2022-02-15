#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleDoorsSettingsMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleInteriorParameterData.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleTemperatureSettings.hpp>

namespace RED4ext
{
namespace audio { 
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
    CName hornOnEvent; // 38
    CName hornOffEvent; // 40
    CName policeHornOnEvent; // 48
    CName policeHornOffEvent; // 50
    CName trafficPanicHornOnEvent; // 58
    CName trafficPanicHornOffEvent; // 60
    CName sirenOnEvent; // 68
    CName sirenOffEvent; // 70
    CName rainStartEvent; // 78
    CName rainStopEvent; // 80
    CName waterStartEvent; // 88
    CName waterStopEvent; // 90
    CName tyreBurstEvent; // 98
    CName collisionSoundEvent; // A0
    CName interiorReverbBus; // A8
    CName skid; // B0
    CName inclination; // B8
    CName impactVelocity; // C0
    CName dopplerShift; // C8
    CName acoustingIsolationFactor; // D0
    CName impactGridCellRawChange; // D8
    audio::VehicleDoorsSettingsMetadata vehicleDoorsSettings; // E0
    audio::VehicleInteriorParameterData vehicleInteriorParameterData; // 110
    audio::VehicleTemperatureSettings vehicleTemperatureSettings; // 128
    uint8_t unk134[0x138 - 0x134]; // 134
};
RED4EXT_ASSERT_SIZE(VehicleGeneralData, 0x138);
} // namespace audio
} // namespace RED4ext
