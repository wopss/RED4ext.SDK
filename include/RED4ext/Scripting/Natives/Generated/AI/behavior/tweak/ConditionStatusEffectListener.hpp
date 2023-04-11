#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatusEffectListener.hpp>

namespace RED4ext
{
namespace AI::behavior::tweak
{
struct ConditionStatusEffectListener : game::IStatusEffectListener
{
    static constexpr const char* NAME = "AIbehaviortweakConditionStatusEffectListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x68 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ConditionStatusEffectListener, 0x68);
} // namespace AI::behavior::tweak
using AIbehaviortweakConditionStatusEffectListener = AI::behavior::tweak::ConditionStatusEffectListener;
} // namespace RED4ext

// clang-format on
