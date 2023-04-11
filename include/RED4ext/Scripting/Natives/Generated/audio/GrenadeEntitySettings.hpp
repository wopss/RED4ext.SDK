#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/audio/EntitySettings.hpp>

namespace RED4ext
{
namespace audio
{
struct GrenadeEntitySettings : audio::EntitySettings
{
    static constexpr const char* NAME = "audioGrenadeEntitySettings";
    static constexpr const char* ALIAS = NAME;

    CName explosionSound; // 88
};
RED4EXT_ASSERT_SIZE(GrenadeEntitySettings, 0x90);
} // namespace audio
using audioGrenadeEntitySettings = audio::GrenadeEntitySettings;
} // namespace RED4ext

// clang-format on
