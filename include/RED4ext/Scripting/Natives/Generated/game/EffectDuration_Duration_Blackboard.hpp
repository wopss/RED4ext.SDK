#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectDurationModifier.hpp>

namespace RED4ext
{
namespace game
{
struct EffectDuration_Duration_Blackboard : game::EffectDurationModifier
{
    static constexpr const char* NAME = "gameEffectDuration_Duration_Blackboard";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(EffectDuration_Duration_Blackboard, 0x48);
} // namespace game
using gameEffectDuration_Duration_Blackboard = game::EffectDuration_Duration_Blackboard;
} // namespace RED4ext

// clang-format on
