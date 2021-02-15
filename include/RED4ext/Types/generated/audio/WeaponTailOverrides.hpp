#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/audio/InlinedAudioMetadata.hpp>
#include <RED4ext/Types/generated/audio/WeaponTailOverride.hpp>

namespace RED4ext
{
namespace audio { 
struct WeaponTailOverrides : audio::InlinedAudioMetadata
{
    static constexpr const char* NAME = "audioWeaponTailOverrides";
    static constexpr const char* ALIAS = NAME;

    Handle<audio::WeaponTailOverride> entryType; // 38
    DynArray<audio::WeaponTailOverride> entries; // 48
    uint8_t unk58[0x88 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(WeaponTailOverrides, 0x88);
} // namespace audio
} // namespace RED4ext
