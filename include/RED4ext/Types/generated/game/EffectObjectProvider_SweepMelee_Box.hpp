#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/EffectObjectProvider_SweepOverTime.hpp>

namespace RED4ext
{
namespace game { 
struct EffectObjectProvider_SweepMelee_Box : game::EffectObjectProvider_SweepOverTime
{
    static constexpr const char* NAME = "gameEffectObjectProvider_SweepMelee_Box";
    static constexpr const char* ALIAS = NAME;

    float playerStaticDetectionConeDistance; // 60
    float playerStaticDetectionConeStartAngle; // 64
    float playerStaticDetectionConeEndAngle; // 68
    bool checkMeleeInvulnerability; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_SweepMelee_Box, 0x70);
} // namespace game
} // namespace RED4ext
