#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/LanguageMapItem.hpp>

namespace RED4ext
{
namespace audio
{
struct LanguageGameConfiguration : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioLanguageGameConfiguration";
    static constexpr const char* ALIAS = NAME;

    DynArray<audio::LanguageMapItem> langsInProject; // 38
    uint8_t unk48[0xC8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(LanguageGameConfiguration, 0xC8);
} // namespace audio
using audioLanguageGameConfiguration = audio::LanguageGameConfiguration;
} // namespace RED4ext

// clang-format on
