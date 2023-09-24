#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MeleeMaterialType.hpp>

namespace RED4ext
{
namespace audio
{
struct AudioMaterialMetadataMapItem : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioAudioMaterialMetadataMapItem";
    static constexpr const char* ALIAS = NAME;

    CName footstepsMetadata; // 38
    CName npcFootstepsMetadata; // 40
    CName ragdollMetadata; // 48
    CName physicalMaterial; // 50
    CName obstructionData; // 58
    CName reflectionParams; // 60
    CName meleeMaterialName; // 68
    CName vehicleMaterialName; // 70
    CName foliageMaterialName; // 78
    CName foliagePaletteTag; // 80
    audio::MeleeMaterialType meleeMaterialType; // 88
    uint8_t unk8C[0xC0 - 0x8C]; // 8C
};
RED4EXT_ASSERT_SIZE(AudioMaterialMetadataMapItem, 0xC0);
} // namespace audio
using audioAudioMaterialMetadataMapItem = audio::AudioMaterialMetadataMapItem;
} // namespace RED4ext

// clang-format on
