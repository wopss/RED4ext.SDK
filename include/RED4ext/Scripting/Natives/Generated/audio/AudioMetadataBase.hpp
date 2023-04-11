#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace audio
{
struct AudioMetadataBase : ISerializable
{
    static constexpr const char* NAME = "audioAudioMetadataBase";
    static constexpr const char* ALIAS = NAME;

    CName name; // 30
};
RED4EXT_ASSERT_SIZE(AudioMetadataBase, 0x38);
} // namespace audio
using audioAudioMetadataBase = audio::AudioMetadataBase;
} // namespace RED4ext

// clang-format on
