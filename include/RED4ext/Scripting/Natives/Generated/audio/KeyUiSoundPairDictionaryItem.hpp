#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/UiSound.hpp>

namespace RED4ext
{
namespace audio
{
struct KeyUiSoundPairDictionaryItem : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioKeyUiSoundPairDictionaryItem";
    static constexpr const char* ALIAS = NAME;

    CName key; // 38
    audio::UiSound value; // 40
};
RED4EXT_ASSERT_SIZE(KeyUiSoundPairDictionaryItem, 0x50);
} // namespace audio
using audioKeyUiSoundPairDictionaryItem = audio::KeyUiSoundPairDictionaryItem;
} // namespace RED4ext

// clang-format on
