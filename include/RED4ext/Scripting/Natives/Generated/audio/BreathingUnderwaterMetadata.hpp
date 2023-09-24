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
struct BreathingUnderwaterMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioBreathingUnderwaterMetadata";
    static constexpr const char* ALIAS = NAME;

    CName inhaleSound; // 38
    CName exhaleSound; // 40
    CName emergenceSound; // 48
    CName struggledEmergenceSound; // 50
    CName divingSuitRTPC; // 58
    float BPM; // 60
    float lowOxygen; // 64
};
RED4EXT_ASSERT_SIZE(BreathingUnderwaterMetadata, 0x68);
} // namespace audio
using audioBreathingUnderwaterMetadata = audio::BreathingUnderwaterMetadata;
} // namespace RED4ext

// clang-format on
