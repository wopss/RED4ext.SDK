#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct BreathingSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioBreathingSettings";
    static constexpr const char* ALIAS = NAME;

    CName initialState; // 38
    CName exhaustionRtpc; // 40
    CName idleFadeOutRtpc; // 48
    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(BreathingSettings, 0x58);
} // namespace audio
using audioBreathingSettings = audio::BreathingSettings;
} // namespace RED4ext

// clang-format on
