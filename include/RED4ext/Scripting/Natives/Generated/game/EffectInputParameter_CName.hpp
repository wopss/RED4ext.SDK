#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct IEffectParameter_CNameEvaluator; }

namespace game
{
struct EffectInputParameter_CName
{
    static constexpr const char* NAME = "gameEffectInputParameter_CName";
    static constexpr const char* ALIAS = "EffectInputParameter_CName";

    uint8_t unk00[0x8 - 0x0]; // 0
    Handle<game::IEffectParameter_CNameEvaluator> evaluator; // 08
};
RED4EXT_ASSERT_SIZE(EffectInputParameter_CName, 0x18);
} // namespace game
using gameEffectInputParameter_CName = game::EffectInputParameter_CName;
using EffectInputParameter_CName = game::EffectInputParameter_CName;
} // namespace RED4ext

// clang-format on
