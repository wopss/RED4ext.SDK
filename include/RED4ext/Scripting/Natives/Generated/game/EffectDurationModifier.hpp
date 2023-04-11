#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct EffectDurationModifier : IScriptable
{
    static constexpr const char* NAME = "gameEffectDurationModifier";
    static constexpr const char* ALIAS = "EffectDurationModifier";

};
RED4EXT_ASSERT_SIZE(EffectDurationModifier, 0x40);
} // namespace game
using gameEffectDurationModifier = game::EffectDurationModifier;
using EffectDurationModifier = game::EffectDurationModifier;
} // namespace RED4ext

// clang-format on
