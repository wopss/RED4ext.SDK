#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AmbientPaletteBrush.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct AmbientPaletteBrushDictionaryItem : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioAmbientPaletteBrushDictionaryItem";
    static constexpr const char* ALIAS = NAME;

    CName key; // 38
    audio::AmbientPaletteBrush value; // 40
};
RED4EXT_ASSERT_SIZE(AmbientPaletteBrushDictionaryItem, 0x70);
} // namespace audio
using audioAmbientPaletteBrushDictionaryItem = audio::AmbientPaletteBrushDictionaryItem;
} // namespace RED4ext

// clang-format on
