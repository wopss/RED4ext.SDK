#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/ReflectionVariant.hpp>

namespace RED4ext
{
namespace audio
{
struct ReflectionEmitterSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioReflectionEmitterSettings";
    static constexpr const char* ALIAS = NAME;

    CName reflectionEvent; // 38
    float fadeout; // 40
    float reflectionDeltaThreshold; // 44
    uint32_t maxConcurrentReflections; // 48
    uint32_t broadcastChannel; // 4C
    bool listenerRelativePosition; // 50
    bool upReflectionEnabled; // 51
    bool shortReflectionIndoors; // 52
    uint8_t unk53[0x54 - 0x53]; // 53
    audio::ReflectionVariant reflectionVariant; // 54
    float backReflectionCutoffSpread; // 58
    float backReflectionCutoffStrength; // 5C
    float backReflectionCutoffSoftness; // 60
    float farReflectionDistance; // 64
    float nearReflectionDistance; // 68
    float minimumFaceAlignement; // 6C
    float fixedRaycastPitch; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
};
RED4EXT_ASSERT_SIZE(ReflectionEmitterSettings, 0x78);
} // namespace audio
using audioReflectionEmitterSettings = audio::ReflectionEmitterSettings;
} // namespace RED4ext

// clang-format on
