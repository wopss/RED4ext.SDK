#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
namespace AI::behavior::tweak
{
struct TweakActionSystem : game::IGameSystem
{
    static constexpr const char* NAME = "AIbehaviortweakTweakActionSystem";
    static constexpr const char* ALIAS = "AITweakActionSystem";

    uint8_t unk48[0x550 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(TweakActionSystem, 0x550);
} // namespace AI::behavior::tweak
using AIbehaviortweakTweakActionSystem = AI::behavior::tweak::TweakActionSystem;
using AITweakActionSystem = AI::behavior::tweak::TweakActionSystem;
} // namespace RED4ext

// clang-format on
