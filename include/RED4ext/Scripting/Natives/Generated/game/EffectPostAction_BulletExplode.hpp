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
struct EffectPostAction_BulletExplode : game::EffectPostAction
{
    static constexpr const char* NAME = "gameEffectPostAction_BulletExplode";
    static constexpr const char* ALIAS = NAME;

    float endRangeTolerance; // 40
    float explosionDuration; // 44
};
RED4EXT_ASSERT_SIZE(EffectPostAction_BulletExplode, 0x48);
} // namespace game
using gameEffectPostAction_BulletExplode = game::EffectPostAction_BulletExplode;
} // namespace RED4ext

// clang-format on
