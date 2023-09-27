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
struct PerfectChargePerkSounds
{
    static constexpr const char* NAME = "audioPerfectChargePerkSounds";
    static constexpr const char* ALIAS = NAME;

    CName perfectChargeChargingSound; // 00
    CName perfectChargeChargedSound; // 08
    CName perfectChargeShootingSound; // 10
};
RED4EXT_ASSERT_SIZE(PerfectChargePerkSounds, 0x18);
} // namespace audio
using audioPerfectChargePerkSounds = audio::PerfectChargePerkSounds;
} // namespace RED4ext

// clang-format on
