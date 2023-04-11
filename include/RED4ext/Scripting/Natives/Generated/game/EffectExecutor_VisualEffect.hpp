#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>

namespace RED4ext
{
namespace game { struct EffectVectorEvaluator; }
namespace world { struct Effect; }

namespace game
{
struct EffectExecutor_VisualEffect : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_VisualEffect";
    static constexpr const char* ALIAS = NAME;

    RaRef<world::Effect> effect; // 48
    bool attached; // 50
    bool breakLoopOnDetach; // 51
    uint8_t unk52[0x58 - 0x52]; // 52
    CName effectTag; // 58
    Handle<game::EffectVectorEvaluator> vectorEvaluator; // 60
};
RED4EXT_ASSERT_SIZE(EffectExecutor_VisualEffect, 0x70);
} // namespace game
using gameEffectExecutor_VisualEffect = game::EffectExecutor_VisualEffect;
} // namespace RED4ext

// clang-format on
