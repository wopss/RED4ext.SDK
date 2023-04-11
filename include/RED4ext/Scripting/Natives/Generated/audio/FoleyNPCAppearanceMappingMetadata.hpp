#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AppearanceToNPCMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VisualTagToNPCMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct FoleyNPCAppearanceMappingMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioFoleyNPCAppearanceMappingMetadata";
    static constexpr const char* ALIAS = NAME;

    CName fallbackMetadata; // 38
    DynArray<audio::AppearanceToNPCMetadata> NPCsPerAppearance; // 40
    DynArray<audio::VisualTagToNPCMetadata> NPCsPerMainMaterial; // 50
    DynArray<audio::VisualTagToNPCMetadata> NPCsPerAdditive; // 60
    uint8_t unk70[0xF0 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(FoleyNPCAppearanceMappingMetadata, 0xF0);
} // namespace audio
using audioFoleyNPCAppearanceMappingMetadata = audio::FoleyNPCAppearanceMappingMetadata;
} // namespace RED4ext

// clang-format on
