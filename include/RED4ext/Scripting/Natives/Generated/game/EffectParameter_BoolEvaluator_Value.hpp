#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffectParameter_BoolEvaluator.hpp>

namespace RED4ext
{
namespace game
{
struct EffectParameter_BoolEvaluator_Value : game::IEffectParameter_BoolEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_BoolEvaluator_Value";
    static constexpr const char* ALIAS = NAME;

    bool value; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(EffectParameter_BoolEvaluator_Value, 0x38);
} // namespace game
using gameEffectParameter_BoolEvaluator_Value = game::EffectParameter_BoolEvaluator_Value;
} // namespace RED4ext

// clang-format on
