#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/DynamicEventsPerVisualTags.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/DynamicEventsWithInterval.hpp>

namespace RED4ext
{
namespace audio
{
struct AudioAttractAreaSounds : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioAudioAttractAreaSounds";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::DynamicEventsPerVisualTags> NPCgrunts; // 38
    DynArray<audio::DynamicEventsWithInterval> environmentSounds; // 48
};
RED4EXT_ASSERT_SIZE(AudioAttractAreaSounds, 0x58);
} // namespace audio
using audioAudioAttractAreaSounds = audio::AudioAttractAreaSounds;
} // namespace RED4ext

// clang-format on
