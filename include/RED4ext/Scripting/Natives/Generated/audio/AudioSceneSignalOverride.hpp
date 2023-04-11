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
struct AudioSceneSignalOverride
{
    static constexpr const char* NAME = "audioAudioSceneSignalOverride";
    static constexpr const char* ALIAS = NAME;

    CName templateSignal; // 00
    CName signalOverride; // 08
};
RED4EXT_ASSERT_SIZE(AudioSceneSignalOverride, 0x10);
} // namespace audio
using audioAudioSceneSignalOverride = audio::AudioSceneSignalOverride;
} // namespace RED4ext

// clang-format on
