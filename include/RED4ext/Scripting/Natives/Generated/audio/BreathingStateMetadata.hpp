#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/breathing/LoopBehavior.hpp>

namespace RED4ext
{
namespace audio
{
struct BreathingStateMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioBreathingStateMetadata";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x40 - 0x38]; // 38
    CName inhaleSound; // 40
    CName exhaleSound; // 48
    float paramChangeSpeed; // 50
    float targetBpm; // 54
    float targetTimeDistortion; // 58
    float stateMinimalTime; // 5C
    float exhaustionChangeSpeed; // 60
    float targetExhaustion; // 64
    audio::breathing::LoopBehavior loopBehavior; // 68
    bool startStateFromBreath; // 69
    uint8_t unk6A[0x80 - 0x6A]; // 6A
};
RED4EXT_ASSERT_SIZE(BreathingStateMetadata, 0x80);
} // namespace audio
using audioBreathingStateMetadata = audio::BreathingStateMetadata;
} // namespace RED4ext

// clang-format on
