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
struct DismembermentSoundSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioDismembermentSoundSettings";
    static constexpr const char* ALIAS = NAME;

    CName headEvent; // 38
    CName armEvent; // 40
    CName legEvent; // 48
};
RED4EXT_ASSERT_SIZE(DismembermentSoundSettings, 0x50);
} // namespace audio
using audioDismembermentSoundSettings = audio::DismembermentSoundSettings;
} // namespace RED4ext

// clang-format on
