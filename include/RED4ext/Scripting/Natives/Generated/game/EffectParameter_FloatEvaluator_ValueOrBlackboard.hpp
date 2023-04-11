#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BlackboardPropertyBindingDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffectParameter_FloatEvaluator.hpp>

namespace RED4ext
{
namespace game
{
struct EffectParameter_FloatEvaluator_ValueOrBlackboard : game::IEffectParameter_FloatEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_FloatEvaluator_ValueOrBlackboard";
    static constexpr const char* ALIAS = NAME;

    game::BlackboardPropertyBindingDefinition blackboardProperty; // 30
    float value; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(EffectParameter_FloatEvaluator_ValueOrBlackboard, 0x70);
} // namespace game
using gameEffectParameter_FloatEvaluator_ValueOrBlackboard = game::EffectParameter_FloatEvaluator_ValueOrBlackboard;
} // namespace RED4ext

// clang-format on
