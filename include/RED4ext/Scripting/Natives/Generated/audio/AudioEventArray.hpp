#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioEventMetadataArrayElement.hpp>

namespace RED4ext
{
namespace audio
{
struct AudioEventArray : ISerializable
{
    static constexpr const char* NAME = "audioAudioEventArray";
    static constexpr const char* ALIAS = NAME;

    bool isSortedByRedHash; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
    DynArray<audio::AudioEventMetadataArrayElement> events; // 38
    DynArray<audio::AudioEventMetadataArrayElement> switchGroup; // 48
    DynArray<audio::AudioEventMetadataArrayElement> switch_; // 58 -- switch
    DynArray<audio::AudioEventMetadataArrayElement> stateGroup; // 68
    DynArray<audio::AudioEventMetadataArrayElement> state; // 78
    DynArray<audio::AudioEventMetadataArrayElement> gameParameter; // 88
    DynArray<audio::AudioEventMetadataArrayElement> bus; // 98
};
RED4EXT_ASSERT_SIZE(AudioEventArray, 0xA8);
} // namespace audio
using audioAudioEventArray = audio::AudioEventArray;
} // namespace RED4ext

// clang-format on
