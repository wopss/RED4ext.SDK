#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>

namespace RED4ext
{
namespace game
{
struct EffectExecutor_BulletImpact : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_BulletImpact";
    static constexpr const char* ALIAS = "EffectExecutor_BulletImpact";

    bool isBackfaceImpact; // 48
    bool noAudio; // 49
    bool isMeleeAttack; // 4A
    uint8_t unk4B[0x50 - 0x4B]; // 4B
};
RED4EXT_ASSERT_SIZE(EffectExecutor_BulletImpact, 0x50);
} // namespace game
using gameEffectExecutor_BulletImpact = game::EffectExecutor_BulletImpact;
using EffectExecutor_BulletImpact = game::EffectExecutor_BulletImpact;
} // namespace RED4ext

// clang-format on
