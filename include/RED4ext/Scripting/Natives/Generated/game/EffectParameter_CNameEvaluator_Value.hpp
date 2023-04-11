#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IEffectParameter_CNameEvaluator.hpp>

namespace RED4ext
{
namespace game
{
struct EffectParameter_CNameEvaluator_Value : game::IEffectParameter_CNameEvaluator
{
    static constexpr const char* NAME = "gameEffectParameter_CNameEvaluator_Value";
    static constexpr const char* ALIAS = NAME;

    CName value; // 30
};
RED4EXT_ASSERT_SIZE(EffectParameter_CNameEvaluator_Value, 0x38);
} // namespace game
using gameEffectParameter_CNameEvaluator_Value = game::EffectParameter_CNameEvaluator_Value;
} // namespace RED4ext

// clang-format on
