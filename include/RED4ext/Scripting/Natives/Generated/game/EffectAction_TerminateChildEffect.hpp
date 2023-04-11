#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectAction.hpp>

namespace RED4ext
{
namespace game
{
struct EffectAction_TerminateChildEffect : game::EffectAction
{
    static constexpr const char* NAME = "gameEffectAction_TerminateChildEffect";
    static constexpr const char* ALIAS = NAME;

    CName effectTag; // 40
};
RED4EXT_ASSERT_SIZE(EffectAction_TerminateChildEffect, 0x48);
} // namespace game
using gameEffectAction_TerminateChildEffect = game::EffectAction_TerminateChildEffect;
} // namespace RED4ext

// clang-format on
