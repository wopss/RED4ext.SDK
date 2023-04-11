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
struct EffectExecutor_TerminateGameEffect : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_TerminateGameEffect";
    static constexpr const char* ALIAS = NAME;

    bool onlyWithPlayerInstigator; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(EffectExecutor_TerminateGameEffect, 0x50);
} // namespace game
using gameEffectExecutor_TerminateGameEffect = game::EffectExecutor_TerminateGameEffect;
} // namespace RED4ext

// clang-format on
