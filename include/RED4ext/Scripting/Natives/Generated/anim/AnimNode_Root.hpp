#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Container.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_Root : anim::AnimNode_Container
{
    static constexpr const char* NAME = "animAnimNode_Root";
    static constexpr const char* ALIAS = NAME;

    anim::PoseLink outputNode; // 58
};
RED4EXT_ASSERT_SIZE(AnimNode_Root, 0x70);
} // namespace anim
using animAnimNode_Root = anim::AnimNode_Root;
} // namespace RED4ext

// clang-format on
