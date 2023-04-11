#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MeleeHitPerMaterialType.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MeleeSound.hpp>

namespace RED4ext
{
namespace audio
{
struct MeleeHitTypeMeleeSoundDictionaryItem : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioMeleeHitTypeMeleeSoundDictionaryItem";
    static constexpr const char* ALIAS = NAME;

    audio::MeleeHitPerMaterialType key; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    audio::MeleeSound value; // 40
};
RED4EXT_ASSERT_SIZE(MeleeHitTypeMeleeSoundDictionaryItem, 0x50);
} // namespace audio
using audioMeleeHitTypeMeleeSoundDictionaryItem = audio::MeleeHitTypeMeleeSoundDictionaryItem;
} // namespace RED4ext

// clang-format on
