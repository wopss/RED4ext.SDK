#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/BlackboardPropertyBindingDefinition.hpp>
#include <RED4ext/Types/generated/game/IEffectParameter_StringEvaluator.hpp>

namespace RED4ext
{
namespace game { 
struct EffectParameter_StringEvaluator_Blackboard : game::IEffectParameter_StringEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_StringEvaluator_Blackboard";
    static constexpr const char* ALIAS = NAME;

    game::BlackboardPropertyBindingDefinition blackboardProperty; // 30
};
RED4EXT_ASSERT_SIZE(EffectParameter_StringEvaluator_Blackboard, 0x68);
} // namespace game
} // namespace RED4ext
