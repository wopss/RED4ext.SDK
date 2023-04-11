#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace anim { struct IAnimStateTransitionCondition; }

namespace anim
{
struct AnimStateMachineConditionalEntry : ISerializable
{
    static constexpr const char* NAME = "animAnimStateMachineConditionalEntry";
    static constexpr const char* ALIAS = NAME;

    uint32_t targetStateIndex; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    Handle<anim::IAnimStateTransitionCondition> condition; // 38
    int32_t priority; // 48
    bool isEnabled; // 4C
    bool isForcedToTrue; // 4D
    uint8_t unk4E[0x50 - 0x4E]; // 4E
};
RED4EXT_ASSERT_SIZE(AnimStateMachineConditionalEntry, 0x50);
} // namespace anim
using animAnimStateMachineConditionalEntry = anim::AnimStateMachineConditionalEntry;
} // namespace RED4ext

// clang-format on
