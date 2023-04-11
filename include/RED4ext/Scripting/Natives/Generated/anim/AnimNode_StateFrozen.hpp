#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_State.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_StateFrozen : anim::AnimNode_State
{
    static constexpr const char* NAME = "animAnimNode_StateFrozen";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk88[0x98 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(AnimNode_StateFrozen, 0x98);
} // namespace anim
using animAnimNode_StateFrozen = anim::AnimNode_StateFrozen;
} // namespace RED4ext

// clang-format on
