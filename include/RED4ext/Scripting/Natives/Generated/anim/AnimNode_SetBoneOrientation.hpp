#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/QuaternionLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SetBoneOrientation : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SetBoneOrientation";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex bone; // 60
    anim::QuaternionLink orientationMs; // 78
};
RED4EXT_ASSERT_SIZE(AnimNode_SetBoneOrientation, 0x98);
} // namespace anim
using animAnimNode_SetBoneOrientation = anim::AnimNode_SetBoneOrientation;
} // namespace RED4ext

// clang-format on
