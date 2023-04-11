#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VoiceTagAppearanceGroup.hpp>

namespace RED4ext
{
namespace audio
{
struct VoiceTagAppearanceMapping : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioVoiceTagAppearanceMapping";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x88 - 0x38]; // 38
    DynArray<audio::VoiceTagAppearanceGroup> mappings; // 88
};
RED4EXT_ASSERT_SIZE(VoiceTagAppearanceMapping, 0x98);
} // namespace audio
using audioVoiceTagAppearanceMapping = audio::VoiceTagAppearanceMapping;
} // namespace RED4ext

// clang-format on
