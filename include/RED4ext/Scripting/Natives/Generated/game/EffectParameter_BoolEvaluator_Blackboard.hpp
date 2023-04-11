#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BlackboardPropertyBindingDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffectParameter_BoolEvaluator.hpp>

namespace RED4ext
{
namespace game
{
struct EffectParameter_BoolEvaluator_Blackboard : game::IEffectParameter_BoolEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_BoolEvaluator_Blackboard";
    static constexpr const char* ALIAS = NAME;

    game::BlackboardPropertyBindingDefinition blackboardProperty; // 30
};
RED4EXT_ASSERT_SIZE(EffectParameter_BoolEvaluator_Blackboard, 0x68);
} // namespace game
using gameEffectParameter_BoolEvaluator_Blackboard = game::EffectParameter_BoolEvaluator_Blackboard;
} // namespace RED4ext

// clang-format on
