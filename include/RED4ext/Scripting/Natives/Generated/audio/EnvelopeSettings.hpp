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
struct EnvelopeSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioEnvelopeSettings";
    static constexpr const char* ALIAS = NAME;

    float attackTime; // 38
    float releaseTime; // 3C
    float holdTime; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(EnvelopeSettings, 0x48);
} // namespace audio
using audioEnvelopeSettings = audio::EnvelopeSettings;
} // namespace RED4ext

// clang-format on
