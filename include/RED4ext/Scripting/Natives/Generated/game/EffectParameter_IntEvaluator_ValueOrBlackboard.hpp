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
struct EffectParameter_IntEvaluator_ValueOrBlackboard : game::IEffectParameter_IntEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_IntEvaluator_ValueOrBlackboard";
    static constexpr const char* ALIAS = NAME;

    game::BlackboardPropertyBindingDefinition blackboardProperty; // 30
    uint32_t value; // 68
    uint8_t unk6C[0x70 - 0x6C]; // 6C
};
RED4EXT_ASSERT_SIZE(EffectParameter_IntEvaluator_ValueOrBlackboard, 0x70);
} // namespace game
using gameEffectParameter_IntEvaluator_ValueOrBlackboard = game::EffectParameter_IntEvaluator_ValueOrBlackboard;
} // namespace RED4ext

// clang-format on
