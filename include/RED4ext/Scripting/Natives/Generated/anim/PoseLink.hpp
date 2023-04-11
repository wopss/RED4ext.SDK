#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace anim { struct AnimNode_Base; }

namespace anim
{
struct PoseLink
{
    static constexpr const char* NAME = "animPoseLink";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<anim::AnimNode_Base> node; // 00
    uint8_t unk10[0x18 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(PoseLink, 0x18);
} // namespace anim
using animPoseLink = anim::PoseLink;
} // namespace RED4ext

// clang-format on
