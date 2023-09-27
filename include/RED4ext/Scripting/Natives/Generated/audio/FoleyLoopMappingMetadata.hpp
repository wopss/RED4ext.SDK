#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AppearanceToFoleyLoopMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/VisualTagToFoleyLoopMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct FoleyLoopMappingMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioFoleyLoopMappingMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::AppearanceToFoleyLoopMetadata> loopsPerAppearance; // 38
    DynArray<audio::VisualTagToFoleyLoopMetadata> loopsPerVisualTag; // 48
    uint8_t unk58[0x80 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(FoleyLoopMappingMetadata, 0x80);
} // namespace audio
using audioFoleyLoopMappingMetadata = audio::FoleyLoopMappingMetadata;
} // namespace RED4ext

// clang-format on
