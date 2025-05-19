#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace audio {
enum class AudioEventFlags : int32_t
{
    NoEventFlags = 0,
    SloMoOnly = 1,
    Music = 2,
    Unique = 4,
    Metadata = 8,
};
} // namespace audio
using audioAudioEventFlags = audio::AudioEventFlags;
} // namespace RED4ext

// clang-format on
