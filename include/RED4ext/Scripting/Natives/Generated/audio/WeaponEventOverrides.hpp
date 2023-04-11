#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/InlinedAudioMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/WeaponEventOverride.hpp>

namespace RED4ext
{
namespace audio
{
struct WeaponEventOverrides : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioWeaponEventOverrides";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::WeaponEventOverride> entryType; // 38
    DynArray<audio::WeaponEventOverride> entries; // 48
    uint8_t unk58[0x88 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(WeaponEventOverrides, 0x88);
} // namespace audio
using audioWeaponEventOverrides = audio::WeaponEventOverrides;
} // namespace RED4ext

// clang-format on
