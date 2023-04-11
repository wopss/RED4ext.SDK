#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BlackboardPropertyBindingDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffectParameter_VectorEvaluator.hpp>

namespace RED4ext
{
namespace game
{
struct EffectParameter_VectorEvaluator_Blackboard : game::IEffectParameter_VectorEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_VectorEvaluator_Blackboard";
    static constexpr const char* ALIAS = NAME;

    game::BlackboardPropertyBindingDefinition blackboardProperty; // 30
};
RED4EXT_ASSERT_SIZE(EffectParameter_VectorEvaluator_Blackboard, 0x68);
} // namespace game
using gameEffectParameter_VectorEvaluator_Blackboard = game::EffectParameter_VectorEvaluator_Blackboard;
} // namespace RED4ext

// clang-format on
