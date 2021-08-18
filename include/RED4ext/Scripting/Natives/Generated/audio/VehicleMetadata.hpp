#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/CustomEmitterMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleEmitterPositionData.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleGeneralData.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleMechanicalData.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VehicleWheelData.hpp>

namespace RED4ext
{
namespace audio { 
struct VehicleMetadata : audio::CustomEmitterMetadata
{
    static constexpr const char* NAME = "audioVehicleMetadata";
    static constexpr const char* ALIAS = NAME;

    CName vehicleCollisionSettings; // 38
    CName vehicleGridDestructionSettings; // 40
    CName vehiclePartSettings; // 48
    float collisionCooldown; // 50
    float minRpm; // 54
    float maxRpm; // 58
    float maxPlayingDistance; // 5C
    float dopplerFactor; // 60
    float suspensionSqueekTimeout; // 64
    float exitDelay; // 68
    bool testWheelMaterial; // 6C
    bool hasRadioReceiver; // 6D
    bool usesPoliceRadioStation; // 6E
    uint8_t unk6F[0x70 - 0x6F]; // 6F
    float acousticIsolationFactor; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
    CName trafficEmitterMetadata; // 78
    CName radioReceiverType; // 80
    DynArray<CName> matchingStartupRadioStations; // 88
    float radioPlaysWhenEngineStartsProbability; // 98
    uint8_t unk9C[0xA0 - 0x9C]; // 9C
    audio::VehicleGeneralData generalData; // A0
    audio::VehicleMechanicalData mechanicalData; // 1B0
    audio::VehicleWheelData wheelData; // 240
    audio::VehicleEmitterPositionData emitterPositionData; // 298
    uint8_t unk304[0x308 - 0x304]; // 304
    DynArray<CName> gearSweeteners; // 308
    uint8_t unk318[0x328 - 0x318]; // 318
};
RED4EXT_ASSERT_SIZE(VehicleMetadata, 0x328);
} // namespace audio
} // namespace RED4ext
