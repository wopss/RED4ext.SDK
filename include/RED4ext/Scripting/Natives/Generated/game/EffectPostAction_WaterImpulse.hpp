#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectPostAction.hpp>

namespace RED4ext
{
namespace game
{
struct EffectPostAction_WaterImpulse : game::EffectPostAction
{
    static constexpr const char* NAME = "gameEffectPostAction_WaterImpulse";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectPostAction_WaterImpulse, 0x40);
} // namespace game
using gameEffectPostAction_WaterImpulse = game::EffectPostAction_WaterImpulse;
} // namespace RED4ext

// clang-format on
