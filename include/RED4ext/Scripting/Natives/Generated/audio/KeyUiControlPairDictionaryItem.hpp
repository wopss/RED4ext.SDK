#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/UiControl.hpp>

namespace RED4ext
{
namespace audio
{
struct KeyUiControlPairDictionaryItem : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioKeyUiControlPairDictionaryItem";
    static constexpr const char* ALIAS = NAME;

    CName key; // 38
    audio::UiControl value; // 40
};
RED4EXT_ASSERT_SIZE(KeyUiControlPairDictionaryItem, 0x50);
} // namespace audio
using audioKeyUiControlPairDictionaryItem = audio::KeyUiControlPairDictionaryItem;
} // namespace RED4ext

// clang-format on
