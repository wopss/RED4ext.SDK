#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct AudioSceneDictionaryItem : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioAudioSceneDictionaryItem";
    static constexpr const char* ALIAS = NAME;

    CName key; // 38
    CName value; // 40
};
RED4EXT_ASSERT_SIZE(AudioSceneDictionaryItem, 0x48);
} // namespace audio
using audioAudioSceneDictionaryItem = audio::AudioSceneDictionaryItem;
} // namespace RED4ext

// clang-format on
