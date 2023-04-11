#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct IEffectParameter_QuatEvaluator; }

namespace game
{
struct EffectInputParameter_Quat
{
    static constexpr const char* NAME = "gameEffectInputParameter_Quat";
    static constexpr const char* ALIAS = "EffectInputParameter_Quat";

    uint8_t unk00[0x8 - 0x0]; // 0
    Handle<game::IEffectParameter_QuatEvaluator> evaluator; // 08
};
RED4EXT_ASSERT_SIZE(EffectInputParameter_Quat, 0x18);
} // namespace game
using gameEffectInputParameter_Quat = game::EffectInputParameter_Quat;
using EffectInputParameter_Quat = game::EffectInputParameter_Quat;
} // namespace RED4ext

// clang-format on
