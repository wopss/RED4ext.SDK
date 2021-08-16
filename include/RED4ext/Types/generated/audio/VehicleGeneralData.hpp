#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/audio/VehicleDoorsSettingsMetadata.hpp>
#include <RED4ext/Types/generated/audio/VehicleInteriorParameterData.hpp>
#include <RED4ext/Types/generated/audio/VehicleTemperatureSettings.hpp>

namespace RED4ext
{
namespace audio { 
struct VehicleGeneralData
{
    static constexpr const char* NAME = "audioVehicleGeneralData";
    static constexpr const char* ALIAS = NAME;

    CName revSoundbankName; // 00
    CName revElectricSoundbankName; // 08
    CName enterVehicleEvent; // 10
    CName exitVehicleEvent; // 18
    CName ignitionStartEvent; // 20
    CName ignitionEndEvent; // 28
    CName hornOnEvent; // 30
    CName hornOffEvent; // 38
    CName policeHornOnEvent; // 40
    CName policeHornOffEvent; // 48
    CName sirenOnEvent; // 50
    CName sirenOffEvent; // 58
    CName rainStartEvent; // 60
    CName rainStopEvent; // 68
    CName tyreBurstEvent; // 70
    CName collisionSoundEvent; // 78
    CName interiorReverbBus; // 80
    CName skid; // 88
    CName inclination; // 90
    CName impactVelocity; // 98
    CName dopplerShift; // A0
    CName acoustingIsolationFactor; // A8
    CName impactGridCellRawChange; // B0
    audio::VehicleDoorsSettingsMetadata vehicleDoorsSettings; // B8
    audio::VehicleInteriorParameterData vehicleInteriorParameterData; // E8
    audio::VehicleTemperatureSettings vehicleTemperatureSettings; // 100
    uint8_t unk10C[0x110 - 0x10C]; // 10C
};
RED4EXT_ASSERT_SIZE(VehicleGeneralData, 0x110);
} // namespace audio
} // namespace RED4ext
