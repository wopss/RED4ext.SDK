#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectAction_KillFXAction.hpp>

namespace RED4ext
{
namespace game
{
struct EffectAction_KillFX : game::EffectAction
{
    static constexpr const char* NAME = "gameEffectAction_KillFX";
    static constexpr const char* ALIAS = NAME;

    game::EffectAction_KillFXAction action; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    CName effectTag; // 48
};
RED4EXT_ASSERT_SIZE(EffectAction_KillFX, 0x50);
} // namespace game
using gameEffectAction_KillFX = game::EffectAction_KillFX;
} // namespace RED4ext

// clang-format on
