#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/KeySoundEventPairDictionaryItem.hpp>

namespace RED4ext
{
namespace audio
{
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
using audioKeySoundEventDictionary = audio::KeySoundEventDictionary;
} // namespace RED4ext

// clang-format on
