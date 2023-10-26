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
struct EffectExecutor_HitReaction : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_HitReaction";
    static constexpr const char* ALIAS = NAME;

    bool npcMissEvents; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(EffectExecutor_HitReaction, 0x50);
} // namespace game
using gameEffectExecutor_HitReaction = game::EffectExecutor_HitReaction;
} // namespace RED4ext

// clang-format on
