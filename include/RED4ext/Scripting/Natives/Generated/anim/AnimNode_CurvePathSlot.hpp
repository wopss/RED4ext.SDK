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
struct AnimNode_CurvePathSlot : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_CurvePathSlot";
    static constexpr const char* ALIAS = NAME;

    anim::PoseLink input; // 48
};
RED4EXT_ASSERT_SIZE(AnimNode_CurvePathSlot, 0x60);
} // namespace anim
using animAnimNode_CurvePathSlot = anim::AnimNode_CurvePathSlot;
} // namespace RED4ext

// clang-format on
