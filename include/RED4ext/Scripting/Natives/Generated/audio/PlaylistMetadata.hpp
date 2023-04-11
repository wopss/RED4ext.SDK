#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct PlaylistMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioPlaylistMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> tracks; // 38
    uint8_t unk48[0x58 - 0x48]; // 48
    uint8_t broadcastChannel; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
};
RED4EXT_ASSERT_SIZE(PlaylistMetadata, 0x60);
} // namespace audio
using audioPlaylistMetadata = audio::PlaylistMetadata;
} // namespace RED4ext

// clang-format on
