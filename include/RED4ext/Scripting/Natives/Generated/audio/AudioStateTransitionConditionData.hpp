#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct AudioStateTransitionConditionData : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioAudioStateTransitionConditionData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AudioStateTransitionConditionData, 0x38);
} // namespace audio
using audioAudioStateTransitionConditionData = audio::AudioStateTransitionConditionData;
} // namespace RED4ext

// clang-format on
