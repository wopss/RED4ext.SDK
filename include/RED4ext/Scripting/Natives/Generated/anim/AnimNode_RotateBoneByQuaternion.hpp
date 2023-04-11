#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_Base.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoseLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/QuaternionLink.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct AnimNode_RotateBoneByQuaternion : anim::AnimNode_Base
{
    static constexpr const char* NAME = "animAnimNode_RotateBoneByQuaternion";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex bone; // 48
    bool useIncrementalMode; // 60
    bool resetOnActivation; // 61
    uint8_t unk62[0x78 - 0x62]; // 62
    anim::PoseLink inputNode; // 78
    anim::QuaternionLink quaternionNode; // 90
};
RED4EXT_ASSERT_SIZE(AnimNode_RotateBoneByQuaternion, 0xB0);
} // namespace anim
using animAnimNode_RotateBoneByQuaternion = anim::AnimNode_RotateBoneByQuaternion;
} // namespace RED4ext

// clang-format on
