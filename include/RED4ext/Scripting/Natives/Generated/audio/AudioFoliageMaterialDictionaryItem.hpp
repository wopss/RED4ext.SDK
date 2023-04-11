#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioFoliageMaterial.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct AudioFoliageMaterialDictionaryItem : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioAudioFoliageMaterialDictionaryItem";
    static constexpr const char* ALIAS = NAME;

    CName key; // 38
    audio::AudioFoliageMaterial value; // 40
};
RED4EXT_ASSERT_SIZE(AudioFoliageMaterialDictionaryItem, 0x50);
} // namespace audio
using audioAudioFoliageMaterialDictionaryItem = audio::AudioFoliageMaterialDictionaryItem;
} // namespace RED4ext

// clang-format on
