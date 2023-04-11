#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_NPCExploration : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_NPCExploration";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x108 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AnimNode_NPCExploration, 0x108);
} // namespace anim
using animAnimNode_NPCExploration = anim::AnimNode_NPCExploration;
} // namespace RED4ext

// clang-format on
