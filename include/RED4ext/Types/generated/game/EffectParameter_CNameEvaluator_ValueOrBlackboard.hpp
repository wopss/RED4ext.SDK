#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/game/BlackboardPropertyBindingDefinition.hpp>
#include <RED4ext/Types/generated/game/IEffectParameter_CNameEvaluator.hpp>

namespace RED4ext
{
namespace game { 
struct EffectParameter_CNameEvaluator_ValueOrBlackboard : game::IEffectParameter_CNameEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_CNameEvaluator_ValueOrBlackboard";
    static constexpr const char* ALIAS = NAME;

    game::BlackboardPropertyBindingDefinition blackboardProperty; // 30
    CName value; // 68
};
RED4EXT_ASSERT_SIZE(EffectParameter_CNameEvaluator_ValueOrBlackboard, 0x70);
} // namespace game
} // namespace RED4ext
