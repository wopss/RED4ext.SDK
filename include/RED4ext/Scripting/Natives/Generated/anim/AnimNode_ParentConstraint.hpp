#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/EInterpolationType.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/NamedTrackIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim { struct IAnimNodeSourceChannel_QsTransform; }

namespace anim
{
struct AnimNode_ParentConstraint : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_ParentConstraint";
    static constexpr const char* ALIAS = NAME;

    Handle<anim::IAnimNodeSourceChannel_QsTransform> parentTransform; // 60
    bool isParentTransformResaved; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
    anim::TransformIndex parentTransformIndex; // 78
    anim::TransformIndex transformIndex; // 90
    anim::EInterpolationType interpolationType; // A8
    float weight; // AC
    anim::NamedTrackIndex weightFloatTrack; // B0
    bool useBoneReferencePoseAsDefaultOffset; // C8
    uint8_t unkC9[0xE0 - 0xC9]; // C9
    anim::FloatLink weightNode; // E0
    anim::VectorLink offsetTranslationLS; // 100
    anim::VectorLink offsetEulerRotationLS; // 120
};
RED4EXT_ASSERT_SIZE(AnimNode_ParentConstraint, 0x140);
} // namespace anim
using animAnimNode_ParentConstraint = anim::AnimNode_ParentConstraint;
} // namespace RED4ext

// clang-format on
