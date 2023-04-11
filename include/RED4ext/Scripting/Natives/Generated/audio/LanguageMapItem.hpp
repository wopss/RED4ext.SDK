#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/AudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/Language.hpp>

namespace RED4ext
{
namespace audio
{
struct LanguageMapItem : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioLanguageMapItem";
    static constexpr const char* ALIAS = NAME;

    audio::Language language; // 38
};
RED4EXT_ASSERT_SIZE(LanguageMapItem, 0x80);
} // namespace audio
using audioLanguageMapItem = audio::LanguageMapItem;
} // namespace RED4ext

// clang-format on
