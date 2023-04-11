#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct IEffectParameter_IntEvaluator; }

namespace game
{
struct EffectInputParameter_Int
{
    static constexpr const char* NAME = "gameEffectInputParameter_Int";
    static constexpr const char* ALIAS = "EffectInputParameter_Int";

    uint8_t unk00[0x8 - 0x0]; // 0
    Handle<game::IEffectParameter_IntEvaluator> evaluator; // 08
};
RED4EXT_ASSERT_SIZE(EffectInputParameter_Int, 0x18);
} // namespace game
using gameEffectInputParameter_Int = game::EffectInputParameter_Int;
using EffectInputParameter_Int = game::EffectInputParameter_Int;
} // namespace RED4ext

// clang-format on
