#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimNode_OnePoseInput.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/VectorLink.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) AnimNode_LocomotionAdjuster : anim::AnimNode_OnePoseInput
{
    static constexpr const char* NAME = "animAnimNode_LocomotionAdjuster";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0x70 - 0x60]; // 60
    anim::VectorLink targetPosition; // 70
    anim::VectorLink targetDirection; // 90
    Vector4 initialForwardVector; // B0
    float blendSpeedPos; // C0
    float blendSpeedPosMin; // C4
    float blendSpeedRot; // C8
    float maxDistance; // CC
};
RED4EXT_ASSERT_SIZE(AnimNode_LocomotionAdjuster, 0xD0);
} // namespace anim
using animAnimNode_LocomotionAdjuster = anim::AnimNode_LocomotionAdjuster;
} // namespace RED4ext

// clang-format on
