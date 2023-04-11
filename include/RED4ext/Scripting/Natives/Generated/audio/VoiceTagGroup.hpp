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
struct VoiceTagGroup : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioVoiceTagGroup";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> voiceTags; // 38
};
RED4EXT_ASSERT_SIZE(VoiceTagGroup, 0x48);
} // namespace audio
using audioVoiceTagGroup = audio::VoiceTagGroup;
} // namespace RED4ext

// clang-format on
