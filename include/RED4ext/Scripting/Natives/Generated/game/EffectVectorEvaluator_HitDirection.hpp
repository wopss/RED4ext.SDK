#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectVectorEvaluator.hpp>

namespace RED4ext
{
namespace game
{
struct EffectVectorEvaluator_HitDirection : game::EffectVectorEvaluator
{
    static constexpr const char* NAME = "gameEffectVectorEvaluator_HitDirection";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectVectorEvaluator_HitDirection, 0x38);
} // namespace game
using gameEffectVectorEvaluator_HitDirection = game::EffectVectorEvaluator_HitDirection;
} // namespace RED4ext

// clang-format on
