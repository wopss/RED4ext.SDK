#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComponentPS.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatusEffect.hpp>

namespace RED4ext
{
namespace game { struct DelayedFunctionsScheduler; }

namespace game
{
struct StatusEffectComponentPS : game::ComponentPS
{
    static constexpr const char* NAME = "gameStatusEffectComponentPS";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::StatusEffect> statusEffectArray; // 68
    Handle<game::DelayedFunctionsScheduler> delayedFunctions; // 78
    Handle<game::DelayedFunctionsScheduler> delayedFunctionsNoTd; // 88
    bool isPlayerControlled; // 98
    bool tickComponent; // 99
    uint8_t unk9A[0xA0 - 0x9A]; // 9A
};
RED4EXT_ASSERT_SIZE(StatusEffectComponentPS, 0xA0);
} // namespace game
using gameStatusEffectComponentPS = game::StatusEffectComponentPS;
} // namespace RED4ext

// clang-format on
