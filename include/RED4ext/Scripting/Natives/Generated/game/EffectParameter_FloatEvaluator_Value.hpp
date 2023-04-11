#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffectParameter_FloatEvaluator.hpp>

namespace RED4ext
{
namespace game
{
struct EffectParameter_FloatEvaluator_Value : game::IEffectParameter_FloatEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_FloatEvaluator_Value";
    static constexpr const char* ALIAS = NAME;

    float value; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(EffectParameter_FloatEvaluator_Value, 0x38);
} // namespace game
using gameEffectParameter_FloatEvaluator_Value = game::EffectParameter_FloatEvaluator_Value;
} // namespace RED4ext

// clang-format on
