#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct AdvertSoundMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioAdvertSoundMetadata";
    static constexpr const char* ALIAS = NAME;

    CName audioEvent1; // 38
    CName audioEvent2; // 40
    CName audioEvent3; // 48
    CName audioEvent4; // 50
    bool useCustomDelays; // 58
    uint8_t unk59[0x5C - 0x59]; // 59
    float speedOfSound; // 5C
    float soundDelay1; // 60
    float soundDelay2; // 64
    float soundDelay3; // 68
    float soundDelay4; // 6C
    uint8_t unk70[0x78 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(AdvertSoundMetadata, 0x78);
} // namespace audio
using audioAdvertSoundMetadata = audio::AdvertSoundMetadata;
} // namespace RED4ext

// clang-format on
