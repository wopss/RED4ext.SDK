#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/BlackboardPropertyBindingDefinition.hpp>
#include <RED4ext/Types/generated/game/IEffectParameter_BoolEvaluator.hpp>

namespace RED4ext
{
namespace game { 
struct EffectParameter_BoolEvaluator_ValueOrBlackboard : game::IEffectParameter_BoolEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_BoolEvaluator_ValueOrBlackboard";
    static constexpr const char* ALIAS = NAME;

    game::BlackboardPropertyBindingDefinition blackboardProperty; // 30
    bool value; // 68
    uint8_t unk69[0x70 - 0x69]; // 69
};
RED4EXT_ASSERT_SIZE(EffectParameter_BoolEvaluator_ValueOrBlackboard, 0x70);
} // namespace game
} // namespace RED4ext
