#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/LimitedSound.hpp>

namespace RED4ext
{
namespace audio
{
struct SoundsLimiterMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioSoundsLimiterMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::LimitedSound> tooManyPlayingGruntsAndVOsLimitation; // 38
    DynArray<audio::LimitedSound> gunsAreLoudAndMusicIsActiveLimitation; // 48
    DynArray<audio::LimitedSound> gunsAreLoudLimitation; // 58
    DynArray<audio::LimitedSound> tooManyPlayingSoundsLimitation; // 68
};
RED4EXT_ASSERT_SIZE(SoundsLimiterMetadata, 0x78);
} // namespace audio
using audioSoundsLimiterMetadata = audio::SoundsLimiterMetadata;
} // namespace RED4ext

// clang-format on
