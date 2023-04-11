#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>

namespace RED4ext
{
namespace game
{
struct EffectExecutor_NewEffect : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_NewEffect";
    static constexpr const char* ALIAS = NAME;

    CName tagInThisFile; // 48
    float forwardOffset; // 50
    bool childEffect; // 54
    uint8_t unk55[0x58 - 0x55]; // 55
    CName childEffectTag; // 58
};
RED4EXT_ASSERT_SIZE(EffectExecutor_NewEffect, 0x60);
} // namespace game
using gameEffectExecutor_NewEffect = game::EffectExecutor_NewEffect;
} // namespace RED4ext

// clang-format on
