#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct IEffectParameter_BoolEvaluator; }

namespace game
{
struct EffectInputParameter_Bool
{
    static constexpr const char* NAME = "gameEffectInputParameter_Bool";
    static constexpr const char* ALIAS = "EffectInputParameter_Bool";

    uint8_t unk00[0x8 - 0x0]; // 0
    Handle<game::IEffectParameter_BoolEvaluator> evaluator; // 08
};
RED4EXT_ASSERT_SIZE(EffectInputParameter_Bool, 0x18);
} // namespace game
using gameEffectInputParameter_Bool = game::EffectInputParameter_Bool;
using EffectInputParameter_Bool = game::EffectInputParameter_Bool;
} // namespace RED4ext

// clang-format on
