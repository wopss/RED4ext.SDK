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
struct AudioEventMetadataArrayElement : ISerializable
{
    static constexpr const char* NAME = "audioAudioEventMetadataArrayElement";
    static constexpr const char* ALIAS = NAME;

    CName redId; // 30
    uint32_t wwiseId; // 38
    float maxAttenuation; // 3C
    bool isLooping; // 40
    uint8_t unk41[0x44 - 0x41]; // 41
    float minDuration; // 44
    float maxDuration; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
    DynArray<CName> stopActionEvents; // 50
    DynArray<CName> tags; // 60
};
RED4EXT_ASSERT_SIZE(AudioEventMetadataArrayElement, 0x70);
} // namespace audio
using audioAudioEventMetadataArrayElement = audio::AudioEventMetadataArrayElement;
} // namespace RED4ext

// clang-format on
