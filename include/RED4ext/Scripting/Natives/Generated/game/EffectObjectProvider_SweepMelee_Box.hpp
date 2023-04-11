#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider_SweepOverTime.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectProvider_SweepMelee_Box : game::EffectObjectProvider_SweepOverTime
{
    static constexpr const char* NAME = "gameEffectObjectProvider_SweepMelee_Box";
    static constexpr const char* ALIAS = NAME;

    float playerStaticDetectionConeDistance; // 68
    float playerStaticDetectionConeStartAngle; // 6C
    float playerStaticDetectionConeEndAngle; // 70
    bool playerUseCameraForObstructionChecks; // 74
    bool checkMeleeInvulnerability; // 75
    uint8_t unk76[0x78 - 0x76]; // 76
};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_SweepMelee_Box, 0x78);
} // namespace game
using gameEffectObjectProvider_SweepMelee_Box = game::EffectObjectProvider_SweepMelee_Box;
} // namespace RED4ext

// clang-format on
