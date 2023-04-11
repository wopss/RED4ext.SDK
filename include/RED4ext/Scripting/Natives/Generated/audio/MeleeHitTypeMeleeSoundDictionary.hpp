#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MeleeHitTypeMeleeSoundDictionaryItem.hpp>

namespace RED4ext
{
namespace audio
{
struct MeleeHitTypeMeleeSoundDictionary : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioMeleeHitTypeMeleeSoundDictionary";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::MeleeHitTypeMeleeSoundDictionaryItem> entryType; // 38
    DynArray<audio::MeleeHitTypeMeleeSoundDictionaryItem> entries; // 48
    uint8_t unk58[0x88 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(MeleeHitTypeMeleeSoundDictionary, 0x88);
} // namespace audio
using audioMeleeHitTypeMeleeSoundDictionary = audio::MeleeHitTypeMeleeSoundDictionary;
} // namespace RED4ext

// clang-format on
