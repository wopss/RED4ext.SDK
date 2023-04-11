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
struct EffectPostAction_ProcessNearlyHitAgents : game::EffectPostAction
{
    static constexpr const char* NAME = "gameEffectPostAction_ProcessNearlyHitAgents";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectPostAction_ProcessNearlyHitAgents, 0x40);
} // namespace game
using gameEffectPostAction_ProcessNearlyHitAgents = game::EffectPostAction_ProcessNearlyHitAgents;
} // namespace RED4ext

// clang-format on
