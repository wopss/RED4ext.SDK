#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_SetBonePosition : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SetBonePosition";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex bone; // 60
    anim::VectorLink positionMs; // 78
};
RED4EXT_ASSERT_SIZE(AnimNode_SetBonePosition, 0x98);
} // namespace anim
using animAnimNode_SetBonePosition = anim::AnimNode_SetBonePosition;
} // namespace RED4ext

// clang-format on
