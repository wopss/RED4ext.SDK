#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/DynamicReverbType.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EchoPositionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/ReverbCrossoverParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/WeaponTailEnvironment.hpp>

namespace RED4ext
{
namespace audio
{
struct DynamicReverbSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioDynamicReverbSettings";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x58 - 0x38]; // 38
    audio::ReverbCrossoverParams crossover1; // 58
    audio::ReverbCrossoverParams crossover2; // 60
    float maxDistance; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
    CName smallReverb; // 70
    float smallReverbMaxDistance; // 78
    float smallReverbFadeOutThreshold; // 7C
    CName mediumReverb; // 80
    CName largeReverb; // 88
    CName vehicleReverb; // 90
    CName sourceBasedReverbSet; // 98
    bool overrideWeaponTail; // A0
    uint8_t unkA1[0xA4 - 0xA1]; // A1
    audio::DynamicReverbType reverbType; // A4
    audio::WeaponTailEnvironment weaponTailType; // A8
    audio::EchoPositionType echoPositionType; // AC
    audio::EchoPositionType reportPositionType; // B0
    uint8_t unkB4[0xC0 - 0xB4]; // B4
};
RED4EXT_ASSERT_SIZE(DynamicReverbSettings, 0xC0);
} // namespace audio
using audioDynamicReverbSettings = audio::DynamicReverbSettings;
} // namespace RED4ext

// clang-format on
