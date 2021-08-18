#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffectParameter_VectorEvaluator.hpp>

namespace RED4ext
{
namespace game { 
struct EffectParameter_VectorEvaluator_Value : game::IEffectParameter_VectorEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_VectorEvaluator_Value";
    static constexpr const char* ALIAS = NAME;

    Vector4 value; // 30
};
RED4EXT_ASSERT_SIZE(EffectParameter_VectorEvaluator_Value, 0x40);
} // namespace game
} // namespace RED4ext
