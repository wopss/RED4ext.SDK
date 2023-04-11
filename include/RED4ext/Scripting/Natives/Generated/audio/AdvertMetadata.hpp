#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AdvertIndoorFilter.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EmitterMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct AdvertMetadata : audio::EmitterMetadata
{
    static constexpr const char* NAME = "audioAdvertMetadata";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> advertSoundNames; // 38
    float minSilenceTime; // 48
    float maxSilenceTime; // 4C
    float minDistance; // 50
    audio::AdvertIndoorFilter filter; // 54
    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(AdvertMetadata, 0x68);
} // namespace audio
using audioAdvertMetadata = audio::AdvertMetadata;
} // namespace RED4ext

// clang-format on
