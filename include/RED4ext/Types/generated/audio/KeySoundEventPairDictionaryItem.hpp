#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/audio/InlinedAudioMetadata.hpp>

namespace RED4ext
{
namespace audio { 
struct KeySoundEventPairDictionaryItem : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioKeySoundEventPairDictionaryItem";
    static constexpr const char* ALIAS = NAME;

    CName key; // 38
    CName value; // 40
};
RED4EXT_ASSERT_SIZE(KeySoundEventPairDictionaryItem, 0x48);
} // namespace audio
} // namespace RED4ext
