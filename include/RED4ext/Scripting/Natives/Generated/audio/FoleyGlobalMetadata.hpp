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
struct FoleyGlobalMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioFoleyGlobalMetadata";
    static constexpr const char* ALIAS = NAME;

    float fadeoutTime; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
    CName fadeoutRtpc; // 40
};
RED4EXT_ASSERT_SIZE(FoleyGlobalMetadata, 0x48);
} // namespace audio
using audioFoleyGlobalMetadata = audio::FoleyGlobalMetadata;
} // namespace RED4ext

// clang-format on
