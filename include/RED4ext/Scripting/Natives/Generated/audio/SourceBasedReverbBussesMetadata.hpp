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
struct SourceBasedReverbBussesMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioSourceBasedReverbBussesMetadata";
    static constexpr const char* ALIAS = NAME;

    CName exterior; // 38
    CName interiorLarge; // 40
    CName interiorMedium; // 48
    CName interiorSmall; // 50
};
RED4EXT_ASSERT_SIZE(SourceBasedReverbBussesMetadata, 0x58);
} // namespace audio
using audioSourceBasedReverbBussesMetadata = audio::SourceBasedReverbBussesMetadata;
} // namespace RED4ext

// clang-format on
