#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BlackboardPropertyBindingDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffectParameter_QuatEvaluator.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) EffectParameter_QuatEvaluator_ValueOrBlackboard : game::IEffectParameter_QuatEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_QuatEvaluator_ValueOrBlackboard";
    static constexpr const char* ALIAS = NAME;

    game::BlackboardPropertyBindingDefinition blackboardProperty; // 30
    uint8_t unk68[0x70 - 0x68]; // 68
    Quaternion value; // 70
};
RED4EXT_ASSERT_SIZE(EffectParameter_QuatEvaluator_ValueOrBlackboard, 0x80);
} // namespace game
using gameEffectParameter_QuatEvaluator_ValueOrBlackboard = game::EffectParameter_QuatEvaluator_ValueOrBlackboard;
} // namespace RED4ext

// clang-format on
