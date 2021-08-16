#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadataBase.hpp>

namespace RED4ext
{
namespace audio { 
struct AudioMetadata : audio::AudioMetadataBase
{
    static constexpr const char* NAME = "audioAudioMetadata";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AudioMetadata, 0x38);
} // namespace audio
} // namespace RED4ext
