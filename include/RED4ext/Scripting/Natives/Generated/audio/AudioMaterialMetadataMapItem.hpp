#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/MeleeMaterialType.hpp>

namespace RED4ext
{
namespace audio { 
struct AudioMaterialMetadataMapItem : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioAudioMaterialMetadataMapItem";
    static constexpr const char* ALIAS = NAME;

    CName footstepsMetadata; // 38
    CName ragdollMetadata; // 40
    CName physicalMaterial; // 48
    CName obstructionData; // 50
    CName reflectionParams; // 58
    CName meleeMaterialName; // 60
    CName vehicleMaterialName; // 68
    CName foliageMaterialName; // 70
    CName foliagePaletteTag; // 78
    audio::MeleeMaterialType meleeMaterialType; // 80
    uint8_t unk84[0xB0 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(AudioMaterialMetadataMapItem, 0xB0);
} // namespace audio
} // namespace RED4ext
