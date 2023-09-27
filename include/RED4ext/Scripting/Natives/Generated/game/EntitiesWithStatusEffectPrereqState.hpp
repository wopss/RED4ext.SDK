#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PrereqState.hpp>

namespace RED4ext
{
namespace game
{
struct EntitiesWithStatusEffectPrereqState : game::PrereqState
{
    static constexpr const char* NAME = "gameEntitiesWithStatusEffectPrereqState";
    static constexpr const char* ALIAS = "EntitiesWithStatusEffectPrereqState";

    uint8_t unkC0[0xF0 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(EntitiesWithStatusEffectPrereqState, 0xF0);
} // namespace game
using gameEntitiesWithStatusEffectPrereqState = game::EntitiesWithStatusEffectPrereqState;
using EntitiesWithStatusEffectPrereqState = game::EntitiesWithStatusEffectPrereqState;
} // namespace RED4ext

// clang-format on
