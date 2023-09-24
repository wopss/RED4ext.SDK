#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/RadioBlip.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/RadioSpeakerType.hpp>

namespace RED4ext
{
namespace audio
{
struct RadioStationMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioRadioStationMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> tracks; // 38
    DynArray<audio::RadioBlip> blips; // 48
    audio::RadioSpeakerType speaker; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(RadioStationMetadata, 0x60);
} // namespace audio
using audioRadioStationMetadata = audio::RadioStationMetadata;
} // namespace RED4ext

// clang-format on
