#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AcousticZoneParameterMapItem.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct AcousticZoneMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioAcousticZoneMetadata";
    static constexpr const char* ALIAS = NAME;

    int32_t priority; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    DynArray<CName> eventsOnEnter; // 40
    DynArray<CName> eventsOnExit; // 50
    DynArray<CName> eventsOnActive; // 60
    DynArray<CName> soundBanks; // 70
    DynArray<audio::AcousticZoneParameterMapItem> parameters; // 80
    CName reverbSettings; // 90
    CName voReverbSettings; // 98
    CName footstepMaterialOverride; // A0
    float bleadingDistance; // A8
    uint8_t unkAC[0xB0 - 0xAC]; // AC
};
RED4EXT_ASSERT_SIZE(AcousticZoneMetadata, 0xB0);
} // namespace audio
using audioAcousticZoneMetadata = audio::AcousticZoneMetadata;
} // namespace RED4ext

// clang-format on
