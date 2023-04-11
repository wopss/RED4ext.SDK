#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/RadioStationJingleMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct RadioStationMetadataMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioRadioStationMetadataMap";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> radioStations; // 38
    uint8_t unk48[0x70 - 0x48]; // 48
    CName switchStationEvent; // 70
    CName turnOnRadioEvent; // 78
    CName turnOffRadioEvent; // 80
    audio::RadioStationJingleMetadata defaultBackgroundJingle; // 88
};
RED4EXT_ASSERT_SIZE(RadioStationMetadataMap, 0xB0);
} // namespace audio
using audioRadioStationMetadataMap = audio::RadioStationMetadataMap;
} // namespace RED4ext

// clang-format on
