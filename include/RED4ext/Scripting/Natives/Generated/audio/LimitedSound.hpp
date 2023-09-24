#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/LimitedSoundType.hpp>

namespace RED4ext
{
namespace audio
{
struct LimitedSound
{
    static constexpr const char* NAME = "audioLimitedSound";
    static constexpr const char* ALIAS = NAME;

    audio::LimitedSoundType soundType; // 00
    uint8_t unk01[0x4 - 0x1]; // 1
    float attenuationDistance; // 04
};
RED4EXT_ASSERT_SIZE(LimitedSound, 0x8);
} // namespace audio
using audioLimitedSound = audio::LimitedSound;
} // namespace RED4ext

// clang-format on
