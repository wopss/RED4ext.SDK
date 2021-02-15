#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/BlackboardPropertyBindingDefinition.hpp>
#include <RED4ext/Types/generated/game/IEffectParameter_FloatEvaluator.hpp>

namespace RED4ext
{
namespace game { 
struct EffectParameter_FloatEvaluator_Blackboard : game::IEffectParameter_FloatEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_FloatEvaluator_Blackboard";
    static constexpr const char* ALIAS = NAME;

    game::BlackboardPropertyBindingDefinition blackboardProperty; // 30
};
RED4EXT_ASSERT_SIZE(EffectParameter_FloatEvaluator_Blackboard, 0x68);
} // namespace game
} // namespace RED4ext
