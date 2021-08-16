#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace audio { 
struct MeleeAttackSettings
{
    static constexpr const char* NAME = "audioMeleeAttackSettings";
    static constexpr const char* ALIAS = NAME;

    CName hitEvent; // 00
    CName penetratingHitEvent; // 08
    CName criticalHitEvent; // 10
    CName killingHitEvent; // 18
};
RED4EXT_ASSERT_SIZE(MeleeAttackSettings, 0x20);
} // namespace audio
} // namespace RED4ext
