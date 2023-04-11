#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BlackboardPropertyBindingDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffectParameter_QuatEvaluator.hpp>

namespace RED4ext
{
namespace game
{
struct EffectParameter_QuatEvaluator_Blackboard : game::IEffectParameter_QuatEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_QuatEvaluator_Blackboard";
    static constexpr const char* ALIAS = NAME;

    game::BlackboardPropertyBindingDefinition blackboardProperty; // 30
};
RED4EXT_ASSERT_SIZE(EffectParameter_QuatEvaluator_Blackboard, 0x68);
} // namespace game
using gameEffectParameter_QuatEvaluator_Blackboard = game::EffectParameter_QuatEvaluator_Blackboard;
} // namespace RED4ext

// clang-format on
