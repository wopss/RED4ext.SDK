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
struct FootstepsMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioFootstepsMetadata";
    static constexpr const char* ALIAS = NAME;

    CName defaultFootwearMetadata; // 38
    DynArray<CName> footwearMetadataArray; // 40
    CName defaultFootwearVfxMetadata; // 50
    DynArray<CName> footwearVfxMetadataArray; // 58
    uint8_t unk68[0xC8 - 0x68]; // 68
    CName slideEvent; // C8
    CName onEnterSound; // D0
    CName onExitSound; // D8
};
RED4EXT_ASSERT_SIZE(FootstepsMetadata, 0xE0);
} // namespace audio
using audioFootstepsMetadata = audio::FootstepsMetadata;
} // namespace RED4ext

// clang-format on
