#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct IEffectParameter_StringEvaluator; }

namespace game
{
struct EffectInputParameter_String
{
    static constexpr const char* NAME = "gameEffectInputParameter_String";
    static constexpr const char* ALIAS = "EffectInputParameter_String";

    uint8_t unk00[0x8 - 0x0]; // 0
    Handle<game::IEffectParameter_StringEvaluator> evaluator; // 08
};
RED4EXT_ASSERT_SIZE(EffectInputParameter_String, 0x18);
} // namespace game
using gameEffectInputParameter_String = game::EffectInputParameter_String;
using EffectInputParameter_String = game::EffectInputParameter_String;
} // namespace RED4ext

// clang-format on
