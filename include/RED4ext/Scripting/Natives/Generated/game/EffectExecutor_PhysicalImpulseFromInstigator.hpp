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
struct EffectExecutor_PhysicalImpulseFromInstigator : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_PhysicalImpulseFromInstigator";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectExecutor_PhysicalImpulseFromInstigator, 0x48);
} // namespace game
using gameEffectExecutor_PhysicalImpulseFromInstigator = game::EffectExecutor_PhysicalImpulseFromInstigator;
} // namespace RED4ext

// clang-format on
