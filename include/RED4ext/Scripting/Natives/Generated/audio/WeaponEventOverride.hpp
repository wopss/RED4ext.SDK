#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>

namespace RED4ext
{
namespace audio
{
struct WeaponEventOverride : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioWeaponEventOverride";
    static constexpr const char* ALIAS = NAME;

    CName key; // 38
    CName value; // 40
};
RED4EXT_ASSERT_SIZE(WeaponEventOverride, 0x48);
} // namespace audio
using audioWeaponEventOverride = audio::WeaponEventOverride;
} // namespace RED4ext

// clang-format on
