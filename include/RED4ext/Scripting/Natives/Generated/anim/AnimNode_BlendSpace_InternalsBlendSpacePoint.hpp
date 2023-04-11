#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_BlendSpace_InternalsBlendSpacePoint
{
    static constexpr const char* NAME = "animAnimNode_BlendSpace_InternalsBlendSpacePoint";
    static constexpr const char* ALIAS = NAME;

    CName animationName; // 00
    bool useFixedCoordinates; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
    DynArray<float> fixedCoordinates; // 10
    bool useStaticPose; // 20
    uint8_t unk21[0x24 - 0x21]; // 21
    float staticPoseTime; // 24
    float staticPoseProgress; // 28
    uint8_t unk2C[0x30 - 0x2C]; // 2C
};
RED4EXT_ASSERT_SIZE(AnimNode_BlendSpace_InternalsBlendSpacePoint, 0x30);
} // namespace anim
using animAnimNode_BlendSpace_InternalsBlendSpacePoint = anim::AnimNode_BlendSpace_InternalsBlendSpacePoint;
} // namespace RED4ext

// clang-format on
