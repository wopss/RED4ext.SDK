#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudSimpleParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct AudioSceneDefaults : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioAudioSceneDefaults";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::AudSimpleParameter> parameters; // 38
};
RED4EXT_ASSERT_SIZE(AudioSceneDefaults, 0x48);
} // namespace audio
using audioAudioSceneDefaults = audio::AudioSceneDefaults;
} // namespace RED4ext

// clang-format on
