#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct ShockwaveGlobalSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioShockwaveGlobalSettings";
    static constexpr const char* ALIAS = NAME;

    float explosionPropagationSpeed; // 38
    float thumpPropagationSpeed; // 3C
    float electroshockPropagationSpeed; // 40
    float revealPropagationSpeed; // 44
};
RED4EXT_ASSERT_SIZE(ShockwaveGlobalSettings, 0x48);
} // namespace audio
using audioShockwaveGlobalSettings = audio::ShockwaveGlobalSettings;
} // namespace RED4ext

// clang-format on
