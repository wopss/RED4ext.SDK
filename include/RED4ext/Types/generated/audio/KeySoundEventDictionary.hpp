#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/audio/InlinedAudioMetadata.hpp>
#include <RED4ext/Types/generated/audio/KeySoundEventPairDictionaryItem.hpp>

namespace RED4ext
{
namespace audio { 
struct KeySoundEventDictionary : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioKeySoundEventDictionary";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::KeySoundEventPairDictionaryItem> entryType; // 38
    DynArray<audio::KeySoundEventPairDictionaryItem> entries; // 48
    uint8_t unk58[0x88 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(KeySoundEventDictionary, 0x88);
} // namespace audio
} // namespace RED4ext
