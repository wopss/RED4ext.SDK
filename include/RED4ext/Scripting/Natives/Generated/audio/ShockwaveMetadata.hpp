#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EmitterMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct ShockwaveMetadata : audio::EmitterMetadata
{
    static constexpr const char* NAME = "audioShockwaveMetadata";
    static constexpr const char* ALIAS = NAME;

    CName explosionMetadataName; // 38
    CName thumpMetadataName; // 40
    CName electroshockMetadataName; // 48
    CName revealMetadataName; // 50
    uint8_t unk58[0x78 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(ShockwaveMetadata, 0x78);
} // namespace audio
using audioShockwaveMetadata = audio::ShockwaveMetadata;
} // namespace RED4ext

// clang-format on
