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
struct AnimNode_AnimSlot : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_AnimSlot";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0xA8 - 0x48]; // 48
    anim::PoseLink inputLink; // A8
};
RED4EXT_ASSERT_SIZE(AnimNode_AnimSlot, 0xC0);
} // namespace anim
using animAnimNode_AnimSlot = anim::AnimNode_AnimSlot;
} // namespace RED4ext

// clang-format on
