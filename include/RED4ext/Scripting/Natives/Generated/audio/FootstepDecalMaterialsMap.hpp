#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/FootstepDecalMaterialEntry.hpp>

namespace RED4ext
{
namespace audio
{
struct FootstepDecalMaterialsMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioFootstepDecalMaterialsMap";
    static constexpr const char* ALIAS = NAME;

    float closestDecalDetectionRadius; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    DynArray<audio::FootstepDecalMaterialEntry> entries; // 40
    uint8_t unk50[0x78 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(FootstepDecalMaterialsMap, 0x78);
} // namespace audio
using audioFootstepDecalMaterialsMap = audio::FootstepDecalMaterialsMap;
} // namespace RED4ext

// clang-format on
