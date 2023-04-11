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
struct EmitterMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioEmitterMetadata";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EmitterMetadata, 0x38);
} // namespace audio
using audioEmitterMetadata = audio::EmitterMetadata;
} // namespace RED4ext

// clang-format on
