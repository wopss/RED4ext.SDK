#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio { struct AudioFoliageMaterialDictionary; }

namespace audio
{
struct AudioFoliageMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioAudioFoliageMetadata";
    static constexpr const char* ALIAS = NAME;

    CName loopStartEvent; // 38
    CName loopStopEvent; // 40
    CName locomotionTotalVelocityParam; // 48
    float locomotionTotalVelocityThreshold; // 50
    float locomotionAngularVelocityMultiplier; // 54
    float minFoliageMeshVolumeThreshold; // 58
    float maxFoliageMeshHeight; // 5C
    float playerInsideRequiredPercentage; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    Handle<audio::AudioFoliageMaterialDictionary> foliageMaterials; // 68
};
RED4EXT_ASSERT_SIZE(AudioFoliageMetadata, 0x78);
} // namespace audio
using audioAudioFoliageMetadata = audio::AudioFoliageMetadata;
} // namespace RED4ext

// clang-format on
