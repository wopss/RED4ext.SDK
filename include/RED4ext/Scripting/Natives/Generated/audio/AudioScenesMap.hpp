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
namespace audio { struct AudioSceneDictionary; }

namespace audio
{
struct AudioScenesMap : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioAudioScenesMap";
    static constexpr const char* ALIAS = NAME;

    CName defaultScene; // 38
    Handle<audio::AudioSceneDictionary> scenesToActivateByQuestEvent; // 40
};
RED4EXT_ASSERT_SIZE(AudioScenesMap, 0x50);
} // namespace audio
using audioAudioScenesMap = audio::AudioScenesMap;
} // namespace RED4ext

// clang-format on
