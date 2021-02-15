#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/audio/AudioMetadata.hpp>

namespace RED4ext
{
namespace audio { 
struct FootstepsMetadata : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioFootstepsMetadata";
    static constexpr const char* ALIAS = NAME;

    CName defaultFootwearMetadata; // 38
    DynArray<CName> footwearMetadataArray; // 40
    uint8_t unk50[0x80 - 0x50]; // 50
    CName slideEvent; // 80
    CName onEnterSound; // 88
    CName onExitSound; // 90
};
RED4EXT_ASSERT_SIZE(FootstepsMetadata, 0x98);
} // namespace audio
} // namespace RED4ext
