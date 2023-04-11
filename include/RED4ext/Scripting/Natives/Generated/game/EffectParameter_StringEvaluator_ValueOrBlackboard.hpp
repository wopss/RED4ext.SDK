#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BlackboardPropertyBindingDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffectParameter_StringEvaluator.hpp>

namespace RED4ext
{
namespace game
{
struct EffectParameter_StringEvaluator_ValueOrBlackboard : game::IEffectParameter_StringEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_StringEvaluator_ValueOrBlackboard";
    static constexpr const char* ALIAS = NAME;

    game::BlackboardPropertyBindingDefinition blackboardProperty; // 30
    CString value; // 68
};
RED4EXT_ASSERT_SIZE(EffectParameter_StringEvaluator_ValueOrBlackboard, 0x88);
} // namespace game
using gameEffectParameter_StringEvaluator_ValueOrBlackboard = game::EffectParameter_StringEvaluator_ValueOrBlackboard;
} // namespace RED4ext

// clang-format on
