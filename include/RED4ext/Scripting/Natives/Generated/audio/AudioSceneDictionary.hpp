#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioSceneDictionaryItem.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct AudioSceneDictionary : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioAudioSceneDictionary";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::AudioSceneDictionaryItem> entryType; // 38
    DynArray<audio::AudioSceneDictionaryItem> entries; // 48
    uint8_t unk58[0x88 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AudioSceneDictionary, 0x88);
} // namespace audio
using audioAudioSceneDictionary = audio::AudioSceneDictionary;
} // namespace RED4ext

// clang-format on
