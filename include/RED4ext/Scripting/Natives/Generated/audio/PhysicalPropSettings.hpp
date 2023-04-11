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
struct PhysicalPropSettings : audio::AudioMetadata
{
    static constexpr const char* NAME = "audioPhysicalPropSettings";
    static constexpr const char* ALIAS = NAME;

    CName shockwaveSound; // 38
    CName damagedSound; // 40
    CName destroyedSound; // 48
    DynArray<CName> materialOverrides; // 50
};
RED4EXT_ASSERT_SIZE(PhysicalPropSettings, 0x60);
} // namespace audio
using audioPhysicalPropSettings = audio::PhysicalPropSettings;
} // namespace RED4ext

// clang-format on
