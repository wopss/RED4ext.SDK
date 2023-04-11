#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_WorkspotAnim : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_WorkspotAnim";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x58 - 0x48]; // 48
    bool collectEvents; // 58
    uint8_t unk59[0x108 - 0x59]; // 59
    anim::PoseLink inputLink; // 108
};
RED4EXT_ASSERT_SIZE(AnimNode_WorkspotAnim, 0x120);
} // namespace anim
using animAnimNode_WorkspotAnim = anim::AnimNode_WorkspotAnim;
} // namespace RED4ext

// clang-format on
