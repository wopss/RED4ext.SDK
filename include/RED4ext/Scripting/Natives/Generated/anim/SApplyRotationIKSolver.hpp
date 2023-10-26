#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) SApplyRotationIKSolver
{
    static constexpr const char* NAME = "animSApplyRotationIKSolver";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x50 - 0x0]; // 0
};
RED4EXT_ASSERT_SIZE(SApplyRotationIKSolver, 0x50);
} // namespace anim
using animSApplyRotationIKSolver = anim::SApplyRotationIKSolver;
} // namespace RED4ext

// clang-format on
