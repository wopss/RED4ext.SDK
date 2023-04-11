#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace audio
{
struct VoiceTagAppearanceGroup
{
    static constexpr const char* NAME = "audioVoiceTagAppearanceGroup";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> appearances; // 00
    DynArray<CName> voicetags; // 10
};
RED4EXT_ASSERT_SIZE(VoiceTagAppearanceGroup, 0x20);
} // namespace audio
using audioVoiceTagAppearanceGroup = audio::VoiceTagAppearanceGroup;
} // namespace RED4ext

// clang-format on
