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
using gameEffectParameter_BoolEvaluator_ValueOrBlackboard = game::EffectParameter_BoolEvaluator_ValueOrBlackboard;
} // namespace RED4ext

// clang-format on
