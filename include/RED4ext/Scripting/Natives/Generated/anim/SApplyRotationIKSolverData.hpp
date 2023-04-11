#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/TransformIndex.hpp>

namespace RED4ext
{
namespace anim
{
struct SApplyRotationIKSolverData
{
    static constexpr const char* NAME = "animSApplyRotationIKSolverData";
    static constexpr const char* ALIAS = NAME;

    anim::TransformIndex bone; // 00
};
RED4EXT_ASSERT_SIZE(SApplyRotationIKSolverData, 0x18);
} // namespace anim
using animSApplyRotationIKSolverData = anim::SApplyRotationIKSolverData;
} // namespace RED4ext

// clang-format on
