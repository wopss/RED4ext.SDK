#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio
{
struct AudioSceneStateOverride
{
    static constexpr const char* NAME = "audioAudioSceneStateOverride";
    static constexpr const char* ALIAS = NAME;

    CName templateStateName; // 00
    CName enterEventOverride; // 08
    CName exitEventOverride; // 10
};
RED4EXT_ASSERT_SIZE(AudioSceneStateOverride, 0x18);
} // namespace audio
using audioAudioSceneStateOverride = audio::AudioSceneStateOverride;
} // namespace RED4ext

// clang-format on
