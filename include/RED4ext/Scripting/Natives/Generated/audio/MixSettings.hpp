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
struct MixSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioMixSettings";
    static constexpr const char* ALIAS = NAME;

    float masterVolume; // 38
    float sfxVolume; // 3C
    float musicVolume; // 40
    float voVolume; // 44
    float uiMenuVolume; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    CName onStartupEvent; // 50
};
RED4EXT_ASSERT_SIZE(MixSettings, 0x58);
} // namespace audio
using audioMixSettings = audio::MixSettings;
} // namespace RED4ext

// clang-format on
