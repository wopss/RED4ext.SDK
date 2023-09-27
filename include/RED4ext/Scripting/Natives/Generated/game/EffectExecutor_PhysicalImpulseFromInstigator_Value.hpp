#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>

namespace RED4ext
{
namespace game
{
struct EffectExecutor_PhysicalImpulseFromInstigator_Value : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_PhysicalImpulseFromInstigator_Value";
    static constexpr const char* ALIAS = NAME;

    float magnitude; // 48
    bool forceUseHitPosition; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
};
RED4EXT_ASSERT_SIZE(EffectExecutor_PhysicalImpulseFromInstigator_Value, 0x50);
} // namespace game
using gameEffectExecutor_PhysicalImpulseFromInstigator_Value = game::EffectExecutor_PhysicalImpulseFromInstigator_Value;
} // namespace RED4ext

// clang-format on
