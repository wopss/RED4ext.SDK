#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectObjectProvider.hpp>

namespace RED4ext
{
namespace game
{
struct EffectObjectProvider_ProjectileHitEvent : game::EffectObjectProvider
{
    static constexpr const char* NAME = "gameEffectObjectProvider_ProjectileHitEvent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectObjectProvider_ProjectileHitEvent, 0x40);
} // namespace game
using gameEffectObjectProvider_ProjectileHitEvent = game::EffectObjectProvider_ProjectileHitEvent;
} // namespace RED4ext

// clang-format on
