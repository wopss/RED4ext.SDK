#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/SetBoneTransformEntry.hpp>

namespace RED4ext
{
namespace anim { 
struct AnimNode_SetBoneTransform : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_SetBoneTransform";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::SetBoneTransformEntry> entries; // 60
};
RED4EXT_ASSERT_SIZE(AnimNode_SetBoneTransform, 0x70);
} // namespace anim
} // namespace RED4ext
