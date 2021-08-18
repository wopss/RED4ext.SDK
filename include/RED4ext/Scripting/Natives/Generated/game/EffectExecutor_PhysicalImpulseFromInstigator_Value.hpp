#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>

namespace RED4ext
{
namespace game { 
struct EffectExecutor_PhysicalImpulseFromInstigator_Value : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_PhysicalImpulseFromInstigator_Value";
    static constexpr const char* ALIAS = NAME;

    float magnitude; // 48
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(EffectExecutor_PhysicalImpulseFromInstigator_Value, 0x50);
} // namespace game
} // namespace RED4ext
