#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VisualTagAppearanceGroup.hpp>

namespace RED4ext
{
namespace audio
{
struct VisualTagAppearanceMapping : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioVisualTagAppearanceMapping";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x60 - 0x38]; // 38
    DynArray<audio::VisualTagAppearanceGroup> mappings; // 60
};
RED4EXT_ASSERT_SIZE(VisualTagAppearanceMapping, 0x70);
} // namespace audio
using audioVisualTagAppearanceMapping = audio::VisualTagAppearanceMapping;
} // namespace RED4ext

// clang-format on
