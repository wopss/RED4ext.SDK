#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffectParameter_StringEvaluator.hpp>

namespace RED4ext
{
namespace game
{
struct EffectParameter_StringEvaluator_Value : game::IEffectParameter_StringEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_StringEvaluator_Value";
    static constexpr const char* ALIAS = NAME;

    CString value; // 30
};
RED4EXT_ASSERT_SIZE(EffectParameter_StringEvaluator_Value, 0x50);
} // namespace game
using gameEffectParameter_StringEvaluator_Value = game::EffectParameter_StringEvaluator_Value;
} // namespace RED4ext

// clang-format on
