#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/RadioTrack.hpp>

namespace RED4ext
{
namespace audio
{
struct RadioTracksMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioRadioTracksMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::RadioTrack> radioTracks; // 38
};
RED4EXT_ASSERT_SIZE(RadioTracksMetadata, 0x48);
} // namespace audio
using audioRadioTracksMetadata = audio::RadioTracksMetadata;
} // namespace RED4ext

// clang-format on
