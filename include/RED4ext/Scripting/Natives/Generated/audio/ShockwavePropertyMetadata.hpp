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
struct ShockwavePropertyMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioShockwavePropertyMetadata";
    static constexpr const char* ALIAS = NAME;

    CName eventName; // 38
    float maxDistance; // 40
    float probability; // 44
};
RED4EXT_ASSERT_SIZE(ShockwavePropertyMetadata, 0x48);
} // namespace audio
using audioShockwavePropertyMetadata = audio::ShockwavePropertyMetadata;
} // namespace RED4ext

// clang-format on
