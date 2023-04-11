#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio { struct AmbientPaletteBrushDictionary; }

namespace audio
{
struct AmbientPaletteBrushCategory : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioAmbientPaletteBrushCategory";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::AmbientPaletteBrushDictionary> brushes; // 38
};
RED4EXT_ASSERT_SIZE(AmbientPaletteBrushCategory, 0x48);
} // namespace audio
using audioAmbientPaletteBrushCategory = audio::AmbientPaletteBrushCategory;
} // namespace RED4ext

// clang-format on
