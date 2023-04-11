#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimFeature.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimFeature_PlayerStateMachineState : anim::AnimFeature
{
    static constexpr const char* NAME = "animAnimFeature_PlayerStateMachineState";
    static constexpr const char* ALIAS = "AnimFeature_PlayerStateMachineState";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AnimFeature_PlayerStateMachineState, 0x48);
} // namespace anim
using animAnimFeature_PlayerStateMachineState = anim::AnimFeature_PlayerStateMachineState;
using AnimFeature_PlayerStateMachineState = anim::AnimFeature_PlayerStateMachineState;
} // namespace RED4ext

// clang-format on
