#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/StackTransformsExtender_SnapToBoneMethod.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformInfo.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_StackTransformsExtender : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_StackTransformsExtender";
    static constexpr const char* ALIAS = NAME;

    CName tag; // 60
    DynArray<anim::TransformInfo> transformInfos; // 68
    DynArray<anim::StackTransformsExtender_SnapToBoneMethod> snapMethods; // 78
    DynArray<bool> snapToReferenceValues; // 88
    DynArray<anim::TransformIndex> snapTargetBones; // 98
    DynArray<bool> offsetToReferenceValues; // A8
    DynArray<anim::TransformIndex> offsetSpaceBones; // B8
    DynArray<QsTransform> offsets; // C8
};
RED4EXT_ASSERT_SIZE(AnimNode_StackTransformsExtender, 0xD8);
} // namespace anim
using animAnimNode_StackTransformsExtender = anim::AnimNode_StackTransformsExtender;
} // namespace RED4ext

// clang-format on
