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
struct ImportFacialInitialPoseEntryDesc
{
    static constexpr const char* NAME = "animImportFacialInitialPoseEntryDesc";
    static constexpr const char* ALIAS = NAME;

    CName poseName; // 00
    int16_t id; // 08
    uint8_t unk0A[0xC - 0xA]; // A
    float weight; // 0C
    float initAnimationPoseMid; // 10
    float initAnimationPoseMin; // 14
    float initAnimationPoseMax; // 18
    uint8_t type; // 1C
    uint8_t side; // 1D
    bool isCachable; // 1E
    uint8_t unk1F[0x20 - 0x1F]; // 1F
};
RED4EXT_ASSERT_SIZE(ImportFacialInitialPoseEntryDesc, 0x20);
} // namespace anim
using animImportFacialInitialPoseEntryDesc = anim::ImportFacialInitialPoseEntryDesc;
} // namespace RED4ext

// clang-format on
