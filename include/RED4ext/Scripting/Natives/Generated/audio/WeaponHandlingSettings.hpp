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
struct WeaponHandlingSettings
{
    static constexpr const char* NAME = "audioWeaponHandlingSettings";
    static constexpr const char* ALIAS = NAME;

    CName equipEvent; // 00
    CName unequipStartedEvent; // 08
    CName unequippedEvent; // 10
};
RED4EXT_ASSERT_SIZE(WeaponHandlingSettings, 0x18);
} // namespace audio
using audioWeaponHandlingSettings = audio::WeaponHandlingSettings;
} // namespace RED4ext

// clang-format on
