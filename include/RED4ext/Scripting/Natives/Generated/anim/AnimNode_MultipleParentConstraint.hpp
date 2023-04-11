#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_MultipleParentConstraint_ParentInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ConstraintWeightMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EInterpolationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim { struct IAnimNodeSourceChannel_Float; }
namespace anim { struct IAnimNodeSourceChannel_QsTransform; }

namespace anim
{
struct AnimNode_MultipleParentConstraint : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_MultipleParentConstraint";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<anim::IAnimNodeSourceChannel_QsTransform>> parentsTransform; // 60
    DynArray<Handle<anim::IAnimNodeSourceChannel_Float>> parentsWeight; // 70
    bool areSourceChannelsResaved; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
    DynArray<anim::AnimNode_MultipleParentConstraint_ParentInfo> parentsTransforms; // 88
    anim::TransformIndex transformIndex; // 98
    anim::EInterpolationType interpolationType; // B0
    anim::ConstraintWeightMode weightMode; // B4
    float weight; // B8
    uint8_t unkBC[0xC0 - 0xBC]; // BC
    anim::NamedTrackIndex weightFloatTrack; // C0
};
RED4EXT_ASSERT_SIZE(AnimNode_MultipleParentConstraint, 0xD8);
} // namespace anim
using animAnimNode_MultipleParentConstraint = anim::AnimNode_MultipleParentConstraint;
} // namespace RED4ext

// clang-format on
