#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) STwoBonesIKSolverData
{
    static constexpr const char* NAME = "animSTwoBonesIKSolverData";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex upperBone; // 00
    anim::TransformIndex jointBone; // 18
    anim::TransformIndex subLowerBone; // 30
    anim::TransformIndex lowerBone; // 48
    anim::TransformIndex ikBone; // 60
    uint8_t unk78[0x80 - 0x78]; // 78
    Vector4 Joint_to_next_dir_in_upper_s_BS; // 80 -- Joint to-next dir in upper's BS
    Vector4 Joint_to_next_dir_in_joint_s_BS; // 90 -- Joint to-next dir in joint's BS
    Vector4 Joint_to_next_dir_in_lower_s_BS; // A0 -- Joint to-next dir in lower's BS
    Vector4 Joint_side_dir_in_upper_s_BS; // B0 -- Joint side dir in upper's BS
    Vector4 Joint_side_dir_in_joint_s_BS; // C0 -- Joint side dir in joint's BS
    Vector4 Joint_side_dir_in_lower_s_BS; // D0 -- Joint side dir in lower's BS
    Vector4 Joint_bend_dir_in_upper_s_BS; // E0 -- Joint bend dir in upper's BS
    Vector4 Joint_bend_dir_in_joint_s_BS; // F0 -- Joint bend dir in joint's BS
    Vector4 Joint_bend_dir_in_lower_s_BS; // 100 -- Joint bend dir in lower's BS
    float jointSideWeightUpper; // 110
    float jointSideWeightJoint; // 114
    float jointSideWeightLower; // 118
    bool reverseBend; // 11C
    bool autoSetupDirs; // 11D
    bool allowToLock; // 11E
    uint8_t unk11F[0x120 - 0x11F]; // 11F
    float limitToLengthPercentage; // 120
    uint8_t unk124[0x130 - 0x124]; // 124
};
RED4EXT_ASSERT_SIZE(STwoBonesIKSolverData, 0x130);
} // namespace anim
using animSTwoBonesIKSolverData = anim::STwoBonesIKSolverData;
} // namespace RED4ext

// clang-format on
