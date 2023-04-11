#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/TriggerEffectMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/TriggerEffectTarget.hpp>

namespace RED4ext
{
namespace audio
{
struct TriggerEffectMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioTriggerEffectMetadata";
    static constexpr const char* ALIAS = NAME;

    audio::TriggerEffectMode mode; // 38
    audio::TriggerEffectTarget target; // 39
    uint8_t unk3A[0x3C - 0x3A]; // 3A
    float strength; // 3C
    float startPosition; // 40
    float endPosition; // 44
    float frequency; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(TriggerEffectMetadata, 0x50);
} // namespace audio
using audioTriggerEffectMetadata = audio::TriggerEffectMetadata;
} // namespace RED4ext

// clang-format on
