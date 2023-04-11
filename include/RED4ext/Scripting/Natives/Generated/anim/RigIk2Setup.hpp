#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/Axis.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IRigIkSetup.hpp>

namespace RED4ext
{
namespace anim
{
struct RigIk2Setup : anim::IRigIkSetup
{
    static constexpr const char* NAME = "animRigIk2Setup";
    static constexpr const char* ALIAS = NAME;

    CName firstBone; // 38
    CName secondBone; // 40
    CName endBone; // 48
    int16_t firstBoneIdx; // 50
    int16_t secondBoneIdx; // 52
    int16_t endBoneIdx; // 54
    uint8_t unk56[0x58 - 0x56]; // 56
    anim::Axis hingeAxis; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(RigIk2Setup, 0x60);
} // namespace anim
using animRigIk2Setup = anim::RigIk2Setup;
} // namespace RED4ext

// clang-format on
