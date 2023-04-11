#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace anim
{
struct RigPartBone
{
    static constexpr const char* NAME = "animRigPartBone";
    static constexpr const char* ALIAS = NAME;

    CName bone; // 00
    float weight; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
};
RED4EXT_ASSERT_SIZE(RigPartBone, 0x10);
} // namespace anim
using animRigPartBone = anim::RigPartBone;
} // namespace RED4ext

// clang-format on
