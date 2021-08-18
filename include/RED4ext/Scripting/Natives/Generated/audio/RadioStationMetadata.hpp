#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/RadioSpeakerType.hpp>

namespace RED4ext
{
namespace audio { 
struct RadioStationMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioRadioStationMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> tracks; // 38
    audio::RadioSpeakerType speaker; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(RadioStationMetadata, 0x50);
} // namespace audio
} // namespace RED4ext
