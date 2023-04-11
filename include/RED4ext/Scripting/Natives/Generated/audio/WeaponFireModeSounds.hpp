#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio
{
struct WeaponFireModeSounds
{
    static constexpr const char* NAME = "audioWeaponFireModeSounds";
    static constexpr const char* ALIAS = NAME;

    CName burst; // 00
    CName charge; // 08
    CName fullAuto; // 10
    CName semiAuto; // 18
    CName windup; // 20
};
RED4EXT_ASSERT_SIZE(WeaponFireModeSounds, 0x28);
} // namespace audio
using audioWeaponFireModeSounds = audio::WeaponFireModeSounds;
} // namespace RED4ext

// clang-format on
