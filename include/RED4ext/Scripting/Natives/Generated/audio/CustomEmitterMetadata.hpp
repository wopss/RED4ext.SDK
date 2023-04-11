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
struct CustomEmitterMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioCustomEmitterMetadata";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CustomEmitterMetadata, 0x38);
} // namespace audio
using audioCustomEmitterMetadata = audio::CustomEmitterMetadata;
} // namespace RED4ext

// clang-format on
