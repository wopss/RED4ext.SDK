#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNodeDebugState.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimGraphDebugState : ISerializable
{
    static constexpr const char* NAME = "animAnimGraphDebugState";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::AnimNodeDebugState> nodes; // 30
};
RED4EXT_ASSERT_SIZE(AnimGraphDebugState, 0x40);
} // namespace anim
using animAnimGraphDebugState = anim::AnimGraphDebugState;
} // namespace RED4ext

// clang-format on
