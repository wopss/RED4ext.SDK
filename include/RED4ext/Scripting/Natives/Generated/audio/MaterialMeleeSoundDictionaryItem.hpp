#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MeleeSound.hpp>

namespace RED4ext
{
namespace audio
{
struct MaterialMeleeSoundDictionaryItem : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioMaterialMeleeSoundDictionaryItem";
    static constexpr const char* ALIAS = NAME;

    CName key; // 38
    audio::MeleeSound value; // 40
};
RED4EXT_ASSERT_SIZE(MaterialMeleeSoundDictionaryItem, 0x50);
} // namespace audio
using audioMaterialMeleeSoundDictionaryItem = audio::MaterialMeleeSoundDictionaryItem;
} // namespace RED4ext

// clang-format on
