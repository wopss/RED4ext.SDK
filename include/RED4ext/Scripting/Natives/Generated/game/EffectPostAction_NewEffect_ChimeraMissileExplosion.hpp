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
struct EffectPostAction_NewEffect_ChimeraMissileExplosion : game::EffectPostAction
{
    static constexpr const char* NAME = "gameEffectPostAction_NewEffect_ChimeraMissileExplosion";
    static constexpr const char* ALIAS = NAME;

    CName tagInThisFile; // 40
    float overrideRadius; // 48
    int32_t executeOnNthHit; // 4C
};
RED4EXT_ASSERT_SIZE(EffectPostAction_NewEffect_ChimeraMissileExplosion, 0x50);
} // namespace game
using gameEffectPostAction_NewEffect_ChimeraMissileExplosion = game::EffectPostAction_NewEffect_ChimeraMissileExplosion;
} // namespace RED4ext

// clang-format on
