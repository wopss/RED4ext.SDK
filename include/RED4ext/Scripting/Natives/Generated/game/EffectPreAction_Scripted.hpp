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
struct EffectPreAction_Scripted : game::EffectPreAction
{
    static constexpr const char* NAME = "gameEffectPreAction_Scripted";
    static constexpr const char* ALIAS = "EffectPreAction_Scripted";

};
RED4EXT_ASSERT_SIZE(EffectPreAction_Scripted, 0x40);
} // namespace game
using gameEffectPreAction_Scripted = game::EffectPreAction_Scripted;
using EffectPreAction_Scripted = game::EffectPreAction_Scripted;
} // namespace RED4ext

// clang-format on
