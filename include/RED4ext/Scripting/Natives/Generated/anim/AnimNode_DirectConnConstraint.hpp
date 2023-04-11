#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/FloatLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim { struct IAnimNodeSourceChannel_QsTransform; }

namespace anim
{
struct AnimNode_DirectConnConstraint : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_DirectConnConstraint";
    static constexpr const char* ALIAS = NAME;

    Handle<anim::IAnimNodeSourceChannel_QsTransform> sourceTransform; // 60
    bool isSourceTransformResaved; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
    anim::TransformIndex sourceTransformIndex; // 78
    anim::TransformIndex transformIndex; // 90
    bool posX; // A8
    bool posY; // A9
    bool posZ; // AA
    bool rotX; // AB
    bool rotY; // AC
    bool rotZ; // AD
    bool scaleX; // AE
    bool scaleY; // AF
    bool scaleZ; // B0
    uint8_t unkB1[0xB4 - 0xB1]; // B1
    float weight; // B4
    uint8_t unkB8[0xC8 - 0xB8]; // B8
    anim::FloatLink weightNode; // C8
};
RED4EXT_ASSERT_SIZE(AnimNode_DirectConnConstraint, 0xE8);
} // namespace anim
using animAnimNode_DirectConnConstraint = anim::AnimNode_DirectConnConstraint;
} // namespace RED4ext

// clang-format on
