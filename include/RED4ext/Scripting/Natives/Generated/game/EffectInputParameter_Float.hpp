#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct IEffectParameter_FloatEvaluator; }

namespace game
{
struct EffectInputParameter_Float
{
    static constexpr const char* NAME = "gameEffectInputParameter_Float";
    static constexpr const char* ALIAS = "EffectInputParameter_Float";

    uint8_t unk00[0x8 - 0x0]; // 0
    Handle<game::IEffectParameter_FloatEvaluator> evaluator; // 08
};
RED4EXT_ASSERT_SIZE(EffectInputParameter_Float, 0x18);
} // namespace game
using gameEffectInputParameter_Float = game::EffectInputParameter_Float;
using EffectInputParameter_Float = game::EffectInputParameter_Float;
} // namespace RED4ext

// clang-format on
