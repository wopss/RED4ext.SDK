#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffectParameter_IntEvaluator.hpp>

namespace RED4ext
{
namespace game
{
struct EffectParameter_IntEvaluator_Value : game::IEffectParameter_IntEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_IntEvaluator_Value";
    static constexpr const char* ALIAS = NAME;

    uint32_t value; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(EffectParameter_IntEvaluator_Value, 0x38);
} // namespace game
using gameEffectParameter_IntEvaluator_Value = game::EffectParameter_IntEvaluator_Value;
} // namespace RED4ext

// clang-format on
