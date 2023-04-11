#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AppearanceToPlayerMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct FoleyPlayerAppearanceMappingMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioFoleyPlayerAppearanceMappingMetadata";
    static constexpr const char* ALIAS = NAME;

    CName fallbackMetadata; // 38
    DynArray<audio::AppearanceToPlayerMetadata> jacketSettings; // 40
    DynArray<audio::AppearanceToPlayerMetadata> topSettings; // 50
    DynArray<audio::AppearanceToPlayerMetadata> bottomSettings; // 60
    DynArray<audio::AppearanceToPlayerMetadata> jewelrySettings; // 70
    uint8_t unk80[0x128 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(FoleyPlayerAppearanceMappingMetadata, 0x128);
} // namespace audio
using audioFoleyPlayerAppearanceMappingMetadata = audio::FoleyPlayerAppearanceMappingMetadata;
} // namespace RED4ext

// clang-format on
