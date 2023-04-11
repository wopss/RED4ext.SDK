#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct IEffectParameter_VectorEvaluator; }

namespace game
{
struct EffectInputParameter_Vector
{
    static constexpr const char* NAME = "gameEffectInputParameter_Vector";
    static constexpr const char* ALIAS = "EffectInputParameter_Vector";

    uint8_t unk00[0x8 - 0x0]; // 0
    Handle<game::IEffectParameter_VectorEvaluator> evaluator; // 08
};
RED4EXT_ASSERT_SIZE(EffectInputParameter_Vector, 0x18);
} // namespace game
using gameEffectInputParameter_Vector = game::EffectInputParameter_Vector;
using EffectInputParameter_Vector = game::EffectInputParameter_Vector;
} // namespace RED4ext

// clang-format on
