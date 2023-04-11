#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMaterialMetadataMapItem.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct PhysicalMaterialToAudioMetadataMatrix : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioPhysicalMaterialToAudioMetadataMatrix";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::AudioMaterialMetadataMapItem> physicalToAudioMaterialAssignments; // 38
    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(PhysicalMaterialToAudioMetadataMatrix, 0x70);
} // namespace audio
using audioPhysicalMaterialToAudioMetadataMatrix = audio::PhysicalMaterialToAudioMetadataMatrix;
} // namespace RED4ext

// clang-format on
