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
struct NpcGunChoirVoice : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioNpcGunChoirVoice";
    static constexpr const char* ALIAS = NAME;

    CName init; // 38
    CName shutdown; // 40
    CName fireSound; // 48
    CName burstFireSound; // 50
    CName chargedSound; // 58
    CName autoFireSound; // 60
    CName autoFireStop; // 68
};
RED4EXT_ASSERT_SIZE(NpcGunChoirVoice, 0x70);
} // namespace audio
using audioNpcGunChoirVoice = audio::NpcGunChoirVoice;
} // namespace RED4ext

// clang-format on
