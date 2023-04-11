#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IPoseBlendMethod.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/OverrideBlendBoneInfo.hpp>

namespace RED4ext
{
namespace anim
{
struct PoseBlendMethod_BoneBranch : anim::IPoseBlendMethod
{
    static constexpr const char* NAME = "animPoseBlendMethod_BoneBranch";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::OverrideBlendBoneInfo> bones; // 30
};
RED4EXT_ASSERT_SIZE(PoseBlendMethod_BoneBranch, 0x40);
} // namespace anim
using animPoseBlendMethod_BoneBranch = anim::PoseBlendMethod_BoneBranch;
} // namespace RED4ext

// clang-format on
