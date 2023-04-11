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
struct ReflectionMaterialSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioReflectionMaterialSettings";
    static constexpr const char* ALIAS = NAME;

    float lowPass; // 38
    float highPass; // 3C
    float gain; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
};
RED4EXT_ASSERT_SIZE(ReflectionMaterialSettings, 0x48);
} // namespace audio
using audioReflectionMaterialSettings = audio::ReflectionMaterialSettings;
} // namespace RED4ext

// clang-format on
