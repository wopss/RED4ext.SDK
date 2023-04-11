#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct SpatialSoundLimitMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioSpatialSoundLimitMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> eventNames; // 38
    DynArray<CName> writeOnlyEventNames; // 48
    DynArray<CName> readOnlyEventNames; // 58
    float radius; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(SpatialSoundLimitMetadata, 0x70);
} // namespace audio
using audioSpatialSoundLimitMetadata = audio::SpatialSoundLimitMetadata;
} // namespace RED4ext

// clang-format on
