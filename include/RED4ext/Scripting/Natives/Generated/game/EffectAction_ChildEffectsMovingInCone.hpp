#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectPostAction.hpp>

namespace RED4ext
{
namespace game
{
struct EffectAction_ChildEffectsMovingInCone : game::EffectPostAction
{
    static constexpr const char* NAME = "gameEffectAction_ChildEffectsMovingInCone";
    static constexpr const char* ALIAS = NAME;

    uint32_t effectsCount; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    CName effectTagInThisFile; // 48
    float coneAngle; // 50
    float minEffectDuration; // 54
    float maxEffectDuration; // 58
    bool twoDimensional; // 5C
    bool smoothInterpolations; // 5D
    uint8_t unk5E[0x60 - 0x5E]; // 5E
};
RED4EXT_ASSERT_SIZE(EffectAction_ChildEffectsMovingInCone, 0x60);
} // namespace game
using gameEffectAction_ChildEffectsMovingInCone = game::EffectAction_ChildEffectsMovingInCone;
} // namespace RED4ext

// clang-format on
