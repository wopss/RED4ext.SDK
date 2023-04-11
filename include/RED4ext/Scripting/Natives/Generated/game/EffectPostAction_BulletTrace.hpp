#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectPostAction_BeamVFX.hpp>

namespace RED4ext
{
namespace game
{
struct EffectPostAction_BulletTrace : game::EffectPostAction_BeamVFX
{
    static constexpr const char* NAME = "gameEffectPostAction_BulletTrace";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectPostAction_BulletTrace, 0x40);
} // namespace game
using gameEffectPostAction_BulletTrace = game::EffectPostAction_BulletTrace;
} // namespace RED4ext

// clang-format on
