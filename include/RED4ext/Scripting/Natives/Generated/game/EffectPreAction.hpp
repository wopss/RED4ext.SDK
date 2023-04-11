#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectAction.hpp>

namespace RED4ext
{
namespace game
{
struct EffectPreAction : game::EffectAction
{
    static constexpr const char* NAME = "gameEffectPreAction";
    static constexpr const char* ALIAS = "EffectPreAction";

};
RED4EXT_ASSERT_SIZE(EffectPreAction, 0x40);
} // namespace game
using gameEffectPreAction = game::EffectPreAction;
using EffectPreAction = game::EffectPreAction;
} // namespace RED4ext

// clang-format on
