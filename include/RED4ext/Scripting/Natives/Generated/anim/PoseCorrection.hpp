#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/BoneCorrection.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/CompareBone.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) PoseCorrection
{
    static constexpr const char* NAME = "animPoseCorrection";
    static constexpr const char* ALIAS = NAME;

    float rbfCoefficient; // 00
    float rbfPowValue; // 04
    uint8_t unk08[0x10 - 0x8]; // 8
#pragma warning(suppress : 4324)
    alignas(16) StaticArray<anim::CompareBone, 4> compareBones; // 10
#pragma warning(suppress : 4324)
    alignas(16) StaticArray<anim::BoneCorrection, 4> boneCorrections; // A0
};
RED4EXT_ASSERT_SIZE(PoseCorrection, 0x130);
} // namespace anim
using animPoseCorrection = anim::PoseCorrection;
} // namespace RED4ext

// clang-format on
