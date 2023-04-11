#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BlackboardPropertyBindingDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffectParameter_IntEvaluator.hpp>

namespace RED4ext
{
namespace game
{
struct EffectParameter_IntEvaluator_Blackboard : game::IEffectParameter_IntEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_IntEvaluator_Blackboard";
    static constexpr const char* ALIAS = NAME;

    game::BlackboardPropertyBindingDefinition blackboardProperty; // 30
};
RED4EXT_ASSERT_SIZE(EffectParameter_IntEvaluator_Blackboard, 0x68);
} // namespace game
using gameEffectParameter_IntEvaluator_Blackboard = game::EffectParameter_IntEvaluator_Blackboard;
} // namespace RED4ext

// clang-format on
