#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_StateMachine.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_LocomotionMachine : anim::AnimNode_StateMachine
{
    static constexpr const char* NAME = "animAnimNode_LocomotionMachine";
    static constexpr const char* ALIAS = NAME;

    bool usePlanner; // 140
    uint8_t unk141[0x148 - 0x141]; // 141
    CName group; // 148
    CName logic; // 150
    CName distance; // 158
    CName duration; // 160
    CName motion; // 168
    CName state; // 170
    CName requestId; // 178
    float transitionTime; // 180
    uint32_t numVariants; // 184
    uint8_t unk188[0x278 - 0x188]; // 188
};
RED4EXT_ASSERT_SIZE(AnimNode_LocomotionMachine, 0x278);
} // namespace anim
using animAnimNode_LocomotionMachine = anim::AnimNode_LocomotionMachine;
} // namespace RED4ext

// clang-format on
