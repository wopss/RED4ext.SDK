#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio { struct MaterialMeleeSoundDictionary; }

namespace audio
{
struct MeleeHitSoundMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioMeleeHitSoundMetadata";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::MaterialMeleeSoundDictionary> meleeSoundsByMaterial; // 38
};
RED4EXT_ASSERT_SIZE(MeleeHitSoundMetadata, 0x48);
} // namespace audio
using audioMeleeHitSoundMetadata = audio::MeleeHitSoundMetadata;
} // namespace RED4ext

// clang-format on
