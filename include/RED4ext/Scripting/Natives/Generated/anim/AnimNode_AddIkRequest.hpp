#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/PoleVectorDetails.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_AddIkRequest : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_AddIkRequest";
    static constexpr const char* ALIAS = NAME;

    CName ikChain; // 60
    anim::TransformIndex targetBone; // 68
    Vector3 positionOffset; // 80
    uint8_t unk8C[0x90 - 0x8C]; // 8C
    Quaternion rotationOffset; // 90
    float weightPosition; // A0
    float weightRotation; // A4
    float blendTimeIn; // A8
    float blendTimeOut; // AC
    int32_t priority; // B0
    uint8_t unkB4[0xB8 - 0xB4]; // B4
    anim::PoleVectorDetails poleVector; // B8
};
RED4EXT_ASSERT_SIZE(AnimNode_AddIkRequest, 0xE0);
} // namespace anim
using animAnimNode_AddIkRequest = anim::AnimNode_AddIkRequest;
} // namespace RED4ext

// clang-format on
