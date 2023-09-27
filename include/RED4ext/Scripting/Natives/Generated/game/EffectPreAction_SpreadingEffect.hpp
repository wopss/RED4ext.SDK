#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectPreAction.hpp>

namespace RED4ext
{
namespace game
{
struct EffectPreAction_SpreadingEffect : game::EffectPreAction
{
    static constexpr const char* NAME = "gameEffectPreAction_SpreadingEffect";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectPreAction_SpreadingEffect, 0x40);
} // namespace game
using gameEffectPreAction_SpreadingEffect = game::EffectPreAction_SpreadingEffect;
} // namespace RED4ext

// clang-format on
