#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioStateTransitionConditionData.hpp>

namespace RED4ext
{
namespace audio
{
struct AudioEventPostedASTCD : audio::AudioStateTransitionConditionData
{
    static constexpr const char* NAME = "audioAudioEventPostedASTCD";
    static constexpr const char* ALIAS = NAME;

    CName audioEvent; // 38
};
RED4EXT_ASSERT_SIZE(AudioEventPostedASTCD, 0x40);
} // namespace audio
using audioAudioEventPostedASTCD = audio::AudioEventPostedASTCD;
} // namespace RED4ext

// clang-format on
