#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ConstraintWeightMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_MultipleParentConstraint_ParentInfo
{
    static constexpr const char* NAME = "animAnimNode_MultipleParentConstraint_ParentInfo";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex parentTransform; // 00
    anim::ConstraintWeightMode parentWeightMode; // 18
    float parentStaticWeight; // 1C
    anim::NamedTrackIndex parentTrackWeight; // 20
    bool useComplementWeight; // 38
    bool useOffset; // 39
    uint8_t unk3A[0x40 - 0x3A]; // 3A
    QsTransform offset; // 40
};
RED4EXT_ASSERT_SIZE(AnimNode_MultipleParentConstraint_ParentInfo, 0x70);
} // namespace anim
using animAnimNode_MultipleParentConstraint_ParentInfo = anim::AnimNode_MultipleParentConstraint_ParentInfo;
} // namespace RED4ext

// clang-format on
