#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectDurationModifier.hpp>

namespace RED4ext
{
namespace game
{
struct EffectDurationModifier_Scripted : game::EffectDurationModifier
{
    static constexpr const char* NAME = "gameEffectDurationModifier_Scripted";
    static constexpr const char* ALIAS = "EffectDurationModifier_Scripted";

};
RED4EXT_ASSERT_SIZE(EffectDurationModifier_Scripted, 0x40);
} // namespace game
using gameEffectDurationModifier_Scripted = game::EffectDurationModifier_Scripted;
using EffectDurationModifier_Scripted = game::EffectDurationModifier_Scripted;
} // namespace RED4ext

// clang-format on
