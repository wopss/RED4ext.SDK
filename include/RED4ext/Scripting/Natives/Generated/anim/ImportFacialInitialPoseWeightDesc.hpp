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
struct ImportFacialInitialPoseWeightDesc
{
    static constexpr const char* NAME = "animImportFacialInitialPoseWeightDesc";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> poseNames; // 00
    DynArray<float> weights; // 10
};
RED4EXT_ASSERT_SIZE(ImportFacialInitialPoseWeightDesc, 0x20);
} // namespace anim
using animImportFacialInitialPoseWeightDesc = anim::ImportFacialInitialPoseWeightDesc;
} // namespace RED4ext

// clang-format on
