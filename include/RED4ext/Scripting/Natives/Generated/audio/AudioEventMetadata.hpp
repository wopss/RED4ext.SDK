#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace audio
{
struct AudioEventMetadata : ISerializable
{
    static constexpr const char* NAME = "audioAudioEventMetadata";
    static constexpr const char* ALIAS = NAME;

    uint32_t wwiseId; // 30
    float maxAttenuation; // 34
    float minDuration; // 38
    float maxDuration; // 3C
    bool isLooping; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
    DynArray<CName> stopActionEvents; // 48
    DynArray<CName> tags; // 58
};
RED4EXT_ASSERT_SIZE(AudioEventMetadata, 0x68);
} // namespace audio
using audioAudioEventMetadata = audio::AudioEventMetadata;
} // namespace RED4ext

// clang-format on
