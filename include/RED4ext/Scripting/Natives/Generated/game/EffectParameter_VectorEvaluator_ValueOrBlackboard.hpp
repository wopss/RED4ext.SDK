#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BlackboardPropertyBindingDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffectParameter_VectorEvaluator.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) EffectParameter_VectorEvaluator_ValueOrBlackboard : game::IEffectParameter_VectorEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_VectorEvaluator_ValueOrBlackboard";
    static constexpr const char* ALIAS = NAME;

    game::BlackboardPropertyBindingDefinition blackboardProperty; // 30
    uint8_t unk68[0x70 - 0x68]; // 68
    Vector4 value; // 70
};
RED4EXT_ASSERT_SIZE(EffectParameter_VectorEvaluator_ValueOrBlackboard, 0x80);
} // namespace game
using gameEffectParameter_VectorEvaluator_ValueOrBlackboard = game::EffectParameter_VectorEvaluator_ValueOrBlackboard;
} // namespace RED4ext

// clang-format on
