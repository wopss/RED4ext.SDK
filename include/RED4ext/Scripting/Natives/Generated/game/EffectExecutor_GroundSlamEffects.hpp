#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>

namespace RED4ext
{
namespace world { struct Effect; }

namespace game
{
struct EffectExecutor_GroundSlamEffects : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_GroundSlamEffects";
    static constexpr const char* ALIAS = NAME;

    RaRef<world::Effect> groundEffect; // 48
    RaRef<world::Effect> waterEffect; // 50
    RaRef<world::Effect> earthquakeLevel1; // 58
    RaRef<world::Effect> earthquakeLevel2; // 60
    float earthquakeLevel1ChargeThreshold; // 68
    float earthquakeLevel2ChargeThreshold; // 6C
};
RED4EXT_ASSERT_SIZE(EffectExecutor_GroundSlamEffects, 0x70);
} // namespace game
using gameEffectExecutor_GroundSlamEffects = game::EffectExecutor_GroundSlamEffects;
} // namespace RED4ext

// clang-format on
