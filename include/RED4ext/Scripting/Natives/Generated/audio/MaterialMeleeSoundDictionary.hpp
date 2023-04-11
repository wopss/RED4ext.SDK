#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MaterialMeleeSoundDictionaryItem.hpp>

namespace RED4ext
{
namespace audio
{
struct MaterialMeleeSoundDictionary : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioMaterialMeleeSoundDictionary";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::MaterialMeleeSoundDictionaryItem> entryType; // 38
    DynArray<audio::MaterialMeleeSoundDictionaryItem> entries; // 48
    uint8_t unk58[0x88 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(MaterialMeleeSoundDictionary, 0x88);
} // namespace audio
using audioMaterialMeleeSoundDictionary = audio::MaterialMeleeSoundDictionary;
} // namespace RED4ext

// clang-format on
