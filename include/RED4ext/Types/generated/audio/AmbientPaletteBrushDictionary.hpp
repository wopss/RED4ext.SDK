#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/audio/AmbientPaletteBrushDictionaryItem.hpp>
#include <RED4ext/Types/generated/audio/InlinedAudioMetadata.hpp>

namespace RED4ext
{
namespace audio { 
struct AmbientPaletteBrushDictionary : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioAmbientPaletteBrushDictionary";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::AmbientPaletteBrushDictionaryItem> entryType; // 38
    DynArray<audio::AmbientPaletteBrushDictionaryItem> entries; // 48
    uint8_t unk58[0x88 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AmbientPaletteBrushDictionary, 0x88);
} // namespace audio
} // namespace RED4ext
