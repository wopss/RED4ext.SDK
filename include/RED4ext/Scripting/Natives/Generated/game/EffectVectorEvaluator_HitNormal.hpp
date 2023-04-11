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
struct EffectVectorEvaluator_HitNormal : game::EffectVectorEvaluator
{
    static constexpr const char* NAME = "gameEffectVectorEvaluator_HitNormal";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectVectorEvaluator_HitNormal, 0x38);
} // namespace game
using gameEffectVectorEvaluator_HitNormal = game::EffectVectorEvaluator_HitNormal;
} // namespace RED4ext

// clang-format on
